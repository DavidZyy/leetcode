/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> ans;
    //     unordered_map<int, int> hash_table;
    //     for(int i = 0; i < nums.size(); i++){
    //        if(hash_table.find(target-nums[i]) == hash_table.end()){
    //            hash_table[nums[i]] = i;
    //        } 
    //        else{
    //            ans.push_back(hash_table[target-nums[i]]);
    //            ans.push_back(i);
    //            break;
    //        }
    //     }
    //     return ans;
    // }
    // another method, do not use std container
    // not right, because the key may be minus.
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int hash_table[10^4+1];
        memset(hash_table, 0, sizeof(hash_table));
        for(int i = 0; i < nums.size(); i++){
            if(hash_table[target-nums[i]] == 0){
                hash_table[nums[i]] = i;
            }
            else{
                ans.push_back(hash_table[nums[i]]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

