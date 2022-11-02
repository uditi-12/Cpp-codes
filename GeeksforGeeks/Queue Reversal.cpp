void reverse(queue<int> &q,int n){
    if(q.empty()){
        return;
    }
    int t=q.front();
    q.pop();
    reverse(q,n);
    q.push(t);
    
}
queue<int> rev(queue<int> q)
{
    // add code here.
    reverse(q,q.size());
    return q;
}
