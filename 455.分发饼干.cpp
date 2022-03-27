/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int id_g = 0, id_s = 0;
        while(id_g < g.size() && id_s < s.size()){
            if(g[id_g] <= s[id_s]){
                id_g++;
            }
            id_s++;
        }
        return id_g;

    }
};
// @lc code=end

