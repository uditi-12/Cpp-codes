/*https://leetcode.com/problems/container-with-most-water/*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int mx=INT_MIN;
        while(i<j){
            int h=min(height[i],height[j]);
            int a=h*(j-i);
            mx=max(mx,a);
            if(h==height[i])
            i++;
            else
                j--;
        }
        return mx;
    }
};
