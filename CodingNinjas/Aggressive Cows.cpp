/* Problem Statement: https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0*/
//Approach: Binary Search

bool isValid(vector<int> &stalls,int k,int mid){
    int c=1;
    int pos=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-pos>=mid){
            c++;
            if(c==k)
                return true;
            pos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int s=0,e=0;
    for(int i=0;i<stalls.size();i++)
        e=max(e,stalls[i]);
    sort(stalls.begin(),stalls.end());
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(isValid(stalls,k,mid)){
            ans=max(ans,mid);
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
 
