/*https://leetcode.com/problems/maximum-average-subarray-i/*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        
        double s=0;
        for(int i=0;i<k;i++){
            s+=nums[i];
        }
        double mx=s/k;
        double ws=s;
        for(int i=k;i<nums.size();i++){
            ws+=(nums[i]-nums[i-k]);
            double l=ws/k;
            mx=max(l,mx);
        }
        
        return mx;
    }
};
