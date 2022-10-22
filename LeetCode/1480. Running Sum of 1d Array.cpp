/*https://leetcode.com/problems/running-sum-of-1d-array/*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            int s=0;
            for(int j=0;j<=i;j++){
                s+=nums[j];
            }
            ans.push_back(s);
        }
        return ans;
    }
};
