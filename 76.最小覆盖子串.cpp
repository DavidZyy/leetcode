/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 最小覆盖子串
 */

// @lc code=start
/**
 * @brief 
 * modify code to make it run faster.
 * 1. use cnt to replace is_matched.
 * 2. use min_p, min_size to replace string result.
 */
class Solution {
public:
    static const int N = 128;
    /*the char in string t*/
    int hash1[N];
    /*the numbers of char in string s*/
    int hash2[N];

    // bool is_matched(){
    //     for(int i = 0; i < 128; i++)
    //         if(hash1[i] > hash2[i])
    //             return false;
    //     return true;
    // }

    string minWindow(string s, string t) {
        /*clear to zero*/
        memset(hash1, 0, sizeof(hash1));
        memset(hash2, 0, sizeof(hash2));

        // string result = "";
        /*the variable to record the remaning chars to be matched*/
        int cnt = 0;

        for(char a : t) {
            hash1[a]++;
            cnt++;
        }
        int p = 0, q = 0;
        int min_p = 0, min_size = s.size()+1;
        for(int q = 0; q < s.size(); q++){
            /*if the char s[q] is in t*/
            if(hash1[s[q]]){
                /*matched*/
                if(hash2[s[q]] < hash1[s[q]])
                    cnt--;
                /*increase the number*/
                hash2[s[q]]++;

                /*shrink the substr, the numbers of s[p] in substr of s is
                    greater or equal to those in t */
                while(!cnt && hash2[s[p]] >= hash1[s[p]]){
                    // if(hash2[s[p]] > hash1[s[p]])
                        // hash2[s[p]]--;
                    // p++;
                    if(hash2[s[p]] == hash1[s[p]]){
                        if(hash2[s[p]] == 0)
                            p++;
                        else
                            break;
                    }
                    else{
                        hash2[s[p]]--;
                        p++;
                    }
                }

                // if(is_matched()){
                if(!cnt && q-p+1 < min_size){
                    // if(result == "" || result.size() > q-p+1)
                        // result = s.substr(p, q-p+1);
                    min_p = p;
                    min_size = q-p+1;
                }

            }
        }
        // return result;
        return min_size > s.size()? "" : s.substr(min_p, min_size);
    }
};
// @lc code=end

