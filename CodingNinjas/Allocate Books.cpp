/*Given an array ‘pages’ of integer numbers, where ‘pages[i]’ represents the number of pages in the ‘i-th’ book. There are ‘m’ number of students, and the task is to allocate all the books to their students. 

Allocate books in a way such that:

1. Each student gets at least one book.

2. Each book should be allocated to a student.

3. Book allocation should be in a contiguous manner.

You have to allocate the books to ‘m’ students such that the maximum number of pages assigned to a student is minimum.*/

//Approach Binary search

#include <bits/stdc++.h> 

bool isValid(vector<int> arr, int n, int m,int mid){
    int studentc=1;
    int p=0;
    for(int i=0;i<n;i++){
        if(p+arr[i]<=mid){
            p+=arr[i];
        }
        else{
            studentc++;
            if(studentc>m || arr[i]>mid){
                return false;
            }
            p=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s=0;
    int e=0;
    for(int i=0;i<arr.size();i++){
        e+=arr[i];
    }
    int mid=s+(e-s)/2;
    int ans=INT_MAX;
    while(s<=e){
        if(isValid(arr,n,m,mid)){
            ans=min(mid,ans);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
