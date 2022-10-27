#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
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
Node* RemoveDuplicatesFromUnsortedList(Node* head) {
   Node* current = head;
   Node* prev = NULL;

   if(current == NULL) {
       //std::cout << "Node not created!\n";
       return NULL;
   }

   //std::
       unordered_map<int, int> visited;
   while (current != NULL)
   {
       if(!visited[current->data]) {
           visited[current->data] = 1;

           prev = current;
           current = current->next;
       }
       else {
           Node* nextNode = current->next;
           prev->next = nextNode;

           delete(current);
           current = nextNode;
       }
   }
   
   return head;
}
Node *removeDuplicates(Node *head)
{
   // Write your code here
   RemoveDuplicatesFromUnsortedList(head);    
}

// Node * remove (Node* head,Node *temp){
//     if(temp==head){
//         head=head->next;
//         return head;
//     }
//     else{
//         Node *start=head,*curr=head->next;
//         while(curr!=temp){
//             curr=curr->next;
//             start=start->next;
//         }
//         start->next=curr->next;
//     }
//     return head;
// }
// Node *removeDuplicates(Node * head) {
//     // Write your code here.
//     if(head==NULL)
//         return NULL;
//     unordered_map<int ,bool> v;
//     Node *temp=head;
//     while(temp!=NULL){
//         if(v[temp->data]==true)
//             head=remove(head,temp);
//         v[temp->data]=true;
//         temp=temp->next;
//     }
//     return head;
// }

// Node *removeDuplicates(Node * head) {
//     if(head==NULL)
//         return NULL;
//     Node *curr=head;
//     while(curr!=NULL){
//         Node * t=curr->next;
//         Node *prev=curr;
//         while(t!=NULL){
//             if(t->data==curr->data){
//                 prev->next=t->next;
//                 delete(t);
//                 t=prev->next;
//             }
//             else{
//                 prev=t;
//                 t=t->next;
//             }
//         }
//         curr=curr->next;
//     }
//     return head;
// }
