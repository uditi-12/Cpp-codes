/*Problem statement: https://leetcode.com/problems/two-sum/*/

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int d;
        map<int,int> m;
        for(int i=0;i<a.size();i++){
            d=target-a.at(i);
            if(m.find(d)!=m.end()){
                vector<int> v{m[d],i};
                return v;
            }
            else{
                m[a.at(i)]=i;
            }
            
        }
        return vector<int> {};
    }
    
};
