/*problem statement: https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0 */
//Approach : Binary Search

#include <bits/stdc++.h> 
bool isValid(vector<int> &boards, int k,int mid){
    int p=0;
    int c=1;
    int n=boards.size();
    for(int i=0;i<n;i++){
        if(p+boards[i]<=mid)
            p+=boards[i];
        else{
            c++;
            if(c>k || boards[i]>mid){
                return false;
            }
            p=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int e=0,s=0;
    for(int i=0;i<boards.size();i++){
        e+=boards[i];
    }
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isValid(boards,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
