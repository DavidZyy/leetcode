/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p = 0, q = numbers.size() - 1;
        int sum;
        vector<int> result;
        while((sum = numbers[p] + numbers[q]) != target){
            if(sum < target)
                p++;
            else
                q--;
        }
        result.push_back(p+1);
        result.push_back(q+1);
        return result;
    }
};
// @lc code=end

