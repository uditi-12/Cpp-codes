/*https://leetcode.com/contest/weekly-contest-313/problems/number-of-common-factors/*/
class Solution {
public:
    int commonFactors(int a, int b) {
        int n,count=0;
        (a>b)? (n=a):(n=b);
        for(int i=1;i<=n;i++){
            if(a%i==0 && b%i==0)
                count++;
        }
        return count;
    }
};
