/*https://leetcode.com/problems/n-th-tribonacci-number/*/
/* Topic: DP*/
class Solution {
public:
    int tribonacci(int n) {
        int ans=0;
        vector<int> dp;
        if(n==0){
            return ans;
        }
        if(n==1 || n==2){
            return 1;
        }
        ans=2;
        dp.push_back(0);
        dp.push_back(1);
        dp.push_back(1);
        int i;
        for(i=3;i<=n;i++){
            dp.push_back(dp[i-1]+dp[i-2]+dp[i-3]);
        }
        return dp[n];
    }
};
