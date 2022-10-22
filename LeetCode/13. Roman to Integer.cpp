/*https://leetcode.com/problems/roman-to-integer/*/

class Solution {
public:
    int check(string s,int i,int l){
        if(s[i]=='I'){
            if(s[l]=='V' || s[l]=='X'){
                return -1;
            }
        }
        else if(s[i]=='X'){
            if(s[l]=='L' || s[l]=='C'){
                return -10;
            }
        }
        else if(s[i]=='C'){
            if(s[l]=='D' || s[l]=='M'){
                return -100;
            }
        }
        return 0;
    }
    int romanToInt(string s) {
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(m.find((char)s[i])!=m.end()){
                int r=check(s,i,i+1);
                cout<<r<<" "<<sum<<" ";
                
                if(r!=0){
                    sum+=(m[s[i+1]]+r);
                    i++;
                }
                else{
                    sum+=(m[s[i]]+r);
                }
                cout<<sum<<" "<<i<<"\n";
            }
        }
        return sum;
    }
};
