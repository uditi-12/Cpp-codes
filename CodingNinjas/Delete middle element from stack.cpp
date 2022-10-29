#include <bits/stdc++.h> 
void ppop(int mid,stack<int>&inputStack, int N){
    if(mid==0)  {
        inputStack.pop(); 
        return;
    }
    int num=inputStack.top();
    inputStack.pop();
    ppop(--mid,inputStack,N);
    inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    //cout<<inputStack[0];
    int mid;
    N%2==0?(mid=N/2):mid =((N+1)/2)-1;
    ppop(mid,inputStack,N);
}
