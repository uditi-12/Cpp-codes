/*https://leetcode.com/problems/merge-sorted-array/*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//         for(int i=0;i<n;i++){
//            nums1[i+m]=nums2[i];
//        }
//         sort(nums1.begin(),nums1.end());
      int i = m - 1, j = n - 1, tar = m + n - 1;
      while (j >= 0) {
      nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
      }
    }
    
};
