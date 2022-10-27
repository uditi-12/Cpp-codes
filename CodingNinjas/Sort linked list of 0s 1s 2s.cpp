/********************************
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

********************************/

Node* sortList(Node *head){
    int c0=0,c1=0,c2=0;
    Node *temp=head;
    while(temp!=NULL){
        if(temp->data==0)
            c0++;
        if(temp->data==1)
            c1++;
        if(temp->data==2)
            c2++;
        temp=temp->next;
    }
    temp=head;
    while(c0--){
        temp->data=0;
        temp=temp->next;
    }
    while(c1--){
        temp->data=1;
        temp=temp->next;
    }
    while(c2--){
        temp->data=2;
        temp=temp->next;
    }
    return head;
}
