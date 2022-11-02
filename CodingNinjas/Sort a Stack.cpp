#include <bits/stdc++.h> 


void sortedins(stack<int> &stack,int k){
    if(stack.empty() || (!stack.empty() && stack.top()<=k)){
        stack.push(k);
        return;
    }
    int n=stack.top();
    stack.pop();
    sortedins(stack,k);
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
    
    if(!stack.empty()){
    int t=stack.top();
    stack.pop();
    sortStack(stack);
       
        sortedins(stack,t);
    }
    else
    return;
}
