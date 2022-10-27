#include<map>
/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/
Node * uniqueSortedList(Node * head) {
    if(head==NULL)
        return NULL;
    Node *curr=head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

// Node * remove (Node* head,Node *temp){
//     if(temp==head){
//         head=head->next;
//         return head;
//     }
//     else{
//         Node *start=head,*curr=head->next;
//         while(curr->data!=temp->data){
//             curr=curr->next;
//             start=start->next;
//         }
//         start->next=curr->next;
//     }
//     return head;
// }
// Node * uniqueSortedList(Node * head) {
//     // Write your code here.
//     if(head==NULL)
//         return NULL;
//     map<int ,bool> v;
//     Node *temp=head;
//     while(temp!=NULL){
//         if(v[temp->data]==true)
//             head=remove(head,temp);
//         v[temp->data]=true;
//         temp=temp->next;
//     }
//     return head;
// }
