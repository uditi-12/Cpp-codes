#include <bits/stdc++.h>
#include<vector>
class Solution{
  public:
    //Function to check whether the list is palindrome.
  //APPROACH ONE
    // bool isPalindrome(Node *head)
    // {
    //     //Your code here
    //     if(head==NULL)
    //     return true;
    //   vector<int> arr;
    //   Node *temp=head;
    //   while(temp!=NULL){
    //       arr.push_back(temp->data);
    //       temp=temp->next;
    //   }
    //   vector<int> arr2=arr;
    //   reverse(arr.begin(),arr.end());
    //   for(int i=0;i<arr.size();i++){
    //       if(arr[i]!=arr2[i])
    //       return false;
    //   }
    //   return true;
    // }
    Node* getMid(Node* head ) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
 
    bool isPalindrome(Node *head)
    {
        if(head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        Node* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
    }
};
