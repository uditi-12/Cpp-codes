/*https://leetcode.com/problems/letter-combinations-of-a-phone-number/*/
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.empty()){
            return v;
        }
        string m[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        v.push_back("");
        for(int i=0;i<digits.length();i++){
            string x=m[digits[i]-'0'];
            vector<string> temp;
            for(int j=0;j<x.length();j++){
                for(int k=0;k<v.size();k++){
                    temp.push_back(v[k]+x[j]);
                }
            }
            v=temp;
            }
        
        return v;        
        
    }
};

//METHOD 2--USING RECURSION
class Solution {
public:
    void sl(string digits,string s,int i,vector<string>&ans,string m[]){
        if(i>=digits.length()){
            ans.push_back(s);
            return ;
        }
        
        string n=m[digits[i]-'0'];
        for(int l=0;l<n.length();l++){
            s.push_back(n[l]);
            sl(digits,s,i+1,ans,m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        string s;
        vector<string>ans;
        if(digits.length()==0)
            return ans;
        int i=0;
        string m[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        sl(digits,s,i,ans,m);
        return ans;
    }
};
