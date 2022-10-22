/*https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&curated[]=1&sortBy=submissions*/
class Solution {
  public:
  int bst(int arr[],int s,int n,int k){
      if(n>=s){
      int mid=s+(n-s)/2;
        
        if(arr[mid]==k)
        return mid;
        if(arr[mid]>k)
        return bst(arr,s,mid-1,k);
        if(arr[mid]<k)
        return bst(arr,mid+1,n,k);
      }
        return -1;
  }
    int binarysearch(int arr[], int n, int k) {
        // code here
        
        return bst(arr,0,n-1,k);
       
    }
};
