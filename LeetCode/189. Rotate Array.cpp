/*https://leetcode.com/problems/rotate-array/*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            vector<int> N(nums.size());
        int n=nums.size();
            for(int i=0;i<nums.size();i++) {
                N[(i+k)%n]=nums[i];
            }
        nums=N;
    }
};
