/*https://leetcode.com/problems/ransom-note/*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int,int>m;
        for(int i=0;i<magazine.size();i++){
            if(m.find(magazine[i])==m.end()){
                m[magazine[i]]=1;
            }
            else
            m[magazine[i]]+=1;
            
            cout<<m[magazine[i]];
        }
        for(int i=0;i<ransomNote.size();i++){
            
            if(m.find(ransomNote[i])!=m.end() )
                if(m[ransomNote[i]]>=1)
                m[ransomNote[i]]-=1;
            else
                return false;
            else
                return false;
        }
        return true;
    }
};
