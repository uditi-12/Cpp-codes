/*https://leetcode.com/problems/minimum-size-subarray-sum/*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mn=INT_MAX;
        int i=0,j=0;
        int n=nums.size();
        int sum=0;
        while(i<n){
            sum+=nums[i];
            if(sum>=target){
                while(sum>=target){
                    sum-=nums[j];
                    j++;
                }
            
            mn=min(mn,i-j+2);
                }
            i++;
        }
        if(mn==INT_MAX){
            mn=0;
        }
        return mn;
    }
};
