//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node *reverse(struct Node *head) 
{
    // Write your code here
  
    if(head==NULL)
        return head;
    struct Node *temp=head,*nt=head->next,*prev=NULL;
   while(nt!=NULL){
       temp->next=prev;
       prev=temp;
       temp=nt;
       nt=nt->next;
   }
    temp->next=prev;
    
    return temp;
}
int length(struct Node * head){
    int n=0;
    struct Node* temp=head;
    while(temp!=NULL){
        n=n+1;
        temp=temp->next;
        
    }
    return n;
}
void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
struct Node* add(struct Node *first,struct Node* second){
    // int carry=0;
    // struct Node *temp1=first,*temp2=second;
    // // // while(temp1!=NULL || temp2!=NULL){
    // // //     int val1=temp1->data;
    // // //     int val2=temp2->data;
    // // //     int sum=val1+val2+carry;
    // // //     carry=sum/10;
    // // //     temp1->data=sum%10;
    // // //     if(temp1!=NULL)
    // // //     temp1=temp1->next;
    // // //     if(temp2!=NULL)
    // // //     temp2=temp2->next;
    // // // }
    // while(temp1!=NULL || temp2!=NULL){
    //     int sum=temp1->data+temp2->data+carry;
    //     carry=sum/10;
    //     temp1->data=sum%10;
    //     temp1=temp1->next;
    //     temp2=temp2->next;
    // }
    // if(carry!=NULL){
    //     if(temp1!=NULL)
    //     temp1->data=temp1->data+carry;
    //     else
    //     insertAtTail(first,temp1,carry);
    // }
    // return first;
    
     int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);
//            ansHead->next=new Node(digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
}
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
         int n1=length(first);
        int n2=length(second);
        struct Node* rfirst=reverse(first);
        struct Node* rsecond=reverse(second);
       
        if(n1>=n2){
            return reverse(add(rfirst,rsecond));
        }
        else
        return reverse(add(rsecond,rfirst));
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
