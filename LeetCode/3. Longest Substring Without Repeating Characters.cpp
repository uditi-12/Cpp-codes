/* Problem Statement: https://leetcode.com/problems/longest-substring-without-repeating-characters/*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int start=0,l=0;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])!=m.end()){
                start=max(start,m[s[i]]+1);
            }
            m[s[i]]=i;
            l=max(l,i-start+1);
        }
        return l;
    }
};
