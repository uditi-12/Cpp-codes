/*https://leetcode.com/problems/number-of-1-bits/*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int N=sizeof(n)*8;
        int count=0;
        
        
        for(int i=0;i<N;i++){
            
            if(n&1>0)
            {count++;}
            n>>=1;
            cout<<count<<"\n";
        }
        return count;
    }
};
