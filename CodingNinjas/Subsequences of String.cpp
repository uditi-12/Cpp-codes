/*https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16*/
class Solution {
public:
    void sl(vector<int>& nums,vector<int> s,int i, vector<vector<int>> &v){
        if(i>=nums.size()){
            v.push_back(s);
            return;
        }
        sl(nums,s,i+1,v);
        
        s.push_back(nums[i]);
        sl(nums,s,i+1,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> s;
        sl(nums,s,0,v);
        
        return v;
    }

};
