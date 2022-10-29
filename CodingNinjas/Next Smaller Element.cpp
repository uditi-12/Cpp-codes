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
