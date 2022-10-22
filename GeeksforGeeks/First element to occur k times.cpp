class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.find(a[i])!=m.end())
                m[a[i]]+=1;
            else
            m[a[i]]=1;
            if(m[a[i]]==k)
                return a[i];
            //cout<<a[i]<<m[a[i]]<<"\n";
        }
        return -1;
    }
};
