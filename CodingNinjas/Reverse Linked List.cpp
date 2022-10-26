/*https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan*/
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
  
    if(head==NULL)
        return head;
    LinkedListNode<int> *temp=head,*nt=head->next,*prev=NULL;
   while(nt!=NULL){
       temp->next=prev;
       prev=temp;
       temp=nt;
       nt=nt->next;
   }
    temp->next=prev;
    head=temp;
    return head;
}
