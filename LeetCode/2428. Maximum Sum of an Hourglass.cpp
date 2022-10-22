/*https://leetcode.com/contest/weekly-contest-313/problems/maximum-sum-of-an-hourglass/*/
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int mx=INT_MIN;
        int i=0,j=0;
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[i].size();j++){
                if(i+2<grid.size() && j+2<grid[i].size()){
                    mx=max(mx,grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]);
                }
            }
        }
        return mx;
    }
};
