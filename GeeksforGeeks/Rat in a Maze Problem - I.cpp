/*https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1*/
class Solution{
    public:
        bool valid(vector<vector<int>> &m,vector<vector<int>> v,int x,int y,int n){
            if((x>=0&&x<n)&&(y>=0&&y<n)&&(v[x][y]==0)&&m[x][y]==1)
            return true;
            else
            return false;
        }
    
    void sol(vector<vector<int>> &m,vector<vector<int>> v, int n,string s,vector<string>&ans,int x,int y){
        if(x==n-1 && y==n-1){
            ans.push_back(s);
            return;
        }
        v[x][y]=1;
        if(valid(m,v,x+1,y,n)){
            s.push_back('D');
            sol(m,v,n,s,ans,x+1,y);
            s.pop_back();
        }
        if(valid(m,v,x-1,y,n)){
            s.push_back('U');
            sol(m,v,n,s,ans,x-1,y);
            s.pop_back();
        }
        if(valid(m,v,x,y+1,n)){
            s.push_back('R');
            sol(m,v,n,s,ans,x,y+1);
            s.pop_back();
        }
        if(valid(m,v,x,y-1,n)){
            s.push_back('L');
            sol(m,v,n,s,ans,x,y-1);
            s.pop_back();
        }
        
        v[x][y]=0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int x=0,y=0;
        vector<string> ans;
        if(m[0][0]==0)
        return ans;
        vector<vector<int>> v=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=0;
            }
        }
        
        string s="";
        sol(m,v,n,s,ans,x,y);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
