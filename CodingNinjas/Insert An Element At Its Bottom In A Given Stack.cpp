#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> s;
    while(!myStack.empty()){
    s.push(myStack.top());
    myStack.pop();
    }
    myStack.push(x);
    while(!s.empty()){
    myStack.push(s.top());
    s.pop();
    }
    return myStack;
}
