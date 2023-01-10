/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p = head, *q = head;
        // if(p)
        //     p=p->next;
        // if(q)
        //     q=q->next;
        // if(q)
        //     q=q->next;
        // if(!p || !q)
        //     goto label;
        // if(!head)
            // goto label;
        // while(p!=q && p && q){
        //     p = p->next;
        //     q = q->next;
        //     /*forget this judgement*/
        //     if(q){
        //         q = q->next;
        //     }
        //     else{
        //         goto label;
        //     }
        // }
        do
        {
            if(!q || !q->next) return nullptr;
            q = q->next->next;
            p = p->next;
            // if(q) q =
        } while (p != q);
        
        /*the circle is existed*/
        // if(q){
            q = head;
            while(q != p){
                q = q->next;
                p = p->next;
            }
            return p;
        // }
// label:
        /* no node is returned before, means that it has no circle in the links.*/
        // return NULL;
    }
};
// @lc code=end

