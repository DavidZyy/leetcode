/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cur = m+n-1;
        int p = m-1;
        int q = n-1;
        while(p >= 0 && q >= 0){
            if(nums2[q] >= nums1[p]){
                nums1[cur--] = nums2[q--];
                // q--;
            }
            else{
                nums1[cur--] = nums1[p--];
                // p--;
            }
            // cur--;
            // nums1[cur--] = nums1[p] <= nums2[q] ? nums2[q--] : nums1[p--];
        }
        while(q >= 0){
            nums1[cur--] = nums2[q--];
            // cur--;
            // q--;
        }
    }
};
// @lc code=end

