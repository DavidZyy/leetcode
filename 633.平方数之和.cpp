/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

/**
 * optimization:
 * 1. q is at most 1<<16, because c is in the range of [0, 2^31-1],
 *      and (2^16)^2 = 2^32 >= 2^31-1
 * 2. maybe set q to 1<<15(i.e. 2^15) is enough, the 
 */
// @lc code=start
class Solution {
public:
    bool judgeSquareSum(int c) {
        long p = 0, q = 1<<16;
        while(p <= q){
            if(p*p + q*q > c)
                q--;
            else if(p*p + q*q < c)
                p++;
            else
                return true;
        }
        return false;
    }
};
// @lc code=end

