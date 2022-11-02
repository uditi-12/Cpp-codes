vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    
    for(int i=0;i<arr.size();i++){
        int min=arr[i];
        for(int j=i+1;j<arr.size();j++){
            if(min>arr[j])
            {   min=arr[j];break;}
        }
        if(min!=arr[i])
        arr[i]=min;
        else
            arr[i]=-1;
    }
    return arr;
}

//Approach 2
#include<iostream>
#include<bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    
    stack<int> s;
    vector<int>ans(n);
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        while(s.top()>=arr[i])
            s.pop();
        ans[i]=s.top();
        s.push(arr[i]);
    }
    return ans;
}
