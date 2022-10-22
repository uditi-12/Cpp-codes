/*https://leetcode.com/problems/power-of-two/*/
class Solution {
public:
    int check(int n,int i){
        if(pow(2,i)>n){
            return 1;
        }
        if(pow(2,i)==n){
            return 0;
        }
        return check(n,i+1);
        
    }
    bool isPowerOfTwo(int n) {
        if(check(n,0)==0)
            return true;
        return false;
    }
};
