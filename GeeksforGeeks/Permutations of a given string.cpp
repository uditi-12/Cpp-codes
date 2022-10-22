
class Solution
{
	public:
	bool check(string S,int index,int l){
	    for(int i=index;i<l;i++){
	        if(S[i]==S[l])
	        return false;
	    }
	    return true;
	}
	void solve(string S,vector<string>&ans,int index){
	    if(index>=S.length()){
	        ans.push_back(S);
	        return;
	    }
	    
	    for(int l=index;l<S.length();l++){
	        if(check(S,index,l)){
	        swap(S[index],S[l]);
	        solve(S,ans,index+1);
	        swap(S[index],S[l]);}
	    }
	    
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
		    solve(S,ans,0);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
