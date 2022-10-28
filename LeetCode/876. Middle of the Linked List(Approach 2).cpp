/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
        if(head==NULL)
            return 0;
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        return n;
    }
    ListNode* middleNode(ListNode* head) {
        int n=length(head);
        int mid;
        (n%2!=0)?(mid=(n+1)/2):mid=n/2+1;
        ListNode *temp=head;
        while(--mid){
            temp=temp->next;
        }
        return temp;
    }
};
