#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
   //list is empty
   if(head == NULL || head->next == head){
       return true;
   }    
   if(head->next == NULL)
       return false;
  
  Node* temp=head->next;
  head->data=0;
  while(temp!=NULL && temp->data!=0){
      temp->data=0;
      temp=temp->next;
  }
  if(temp==NULL)
      return false;
  if(temp->data==0 && temp!=head){
      return false;
  }
  return true;   
}


// bool isCircular(Node* head){
//     // Write your code here.
//     if(head==NULL||head->next==head)
//         return true;
// //     if(head->next==NULL)
// //         return false;
//     Node *temp=head;
//     do{
//         temp=temp->next;
//     }while(temp!=head && temp!=NULL);
//     if(temp==NULL)
//         return false;
//     return true;
// }
