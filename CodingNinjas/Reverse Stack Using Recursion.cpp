
#include<bits/stdc++.h>
void insert(stack<int> &stack,int k){
    if(stack.empty()){
        stack.push(k);
        return ;
    }
    int t=stack.top();
    stack.pop();
    insert(stack,k);
    stack.push(t);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    //1 2 3 4 
   if(stack.empty()){
       return;
   }
    int t=stack.top();
    stack.pop();
    reverseStack(stack);
    
    insert(stack,t);
}
