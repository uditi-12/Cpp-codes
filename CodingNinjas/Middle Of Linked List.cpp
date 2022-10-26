/*https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0*/

#include <bits/stdc++.h> 
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
int num(Node *head){
    if(head==NULL)
        return 0;
    int c=0;
    Node *temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
Node *findMiddle(Node *head) {
    // Write your code here
    int n=num(head);
    int mid;
    (n%2==0)?mid=n/2+1:mid=(n+1)/2;
    Node *temp=head;
    while(--mid){
        temp=temp->next;
    }
    return temp;
}
