#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head==NULL)
        return NULL;
    Node *prev=NULL,*temp=head,*curr=NULL;
    int i=0;
    
    while(temp!=NULL && i<k){
        curr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=curr;
        i++;
    }
    if(curr!=NULL){
        head->next=kReverse(curr,k);
    }
   return prev;
}
