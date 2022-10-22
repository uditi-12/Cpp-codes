/*https://leetcode.com/problems/palindrome-number/*/
class Solution {
public:
    bool isPalindrome(int x) {
        stack<int>s;
        int n=x;
        double r=0;
        while(n!=0 && n > 0){
            r=r*10+n%10;
            n=n/10;
        }
        if(r==x)
           return true;
        return false;
    }
};
