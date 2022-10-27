/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node *floyd(Node *head){
    if(head==NULL)
        return NULL;
    Node *slow=head,*fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;
        slow=slow->next;
        if(slow==fast)
            return slow;
    }
    return NULL;
}
Node *startofloop(Node *head){
    if(head==NULL)
        return NULL;
    Node *slow=head,*fast=floyd(head);
    if(fast==NULL)
        return NULL;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head==NULL)
        return NULL;
    Node *start=startofloop(head);
    if(start==NULL)
        return head;
    Node *temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
