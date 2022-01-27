/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //TC:O(N) SC:O(1) 双指针
    ListNode* reverseList(ListNode* head) {
        auto cur=head;
        ListNode *pre=NULL, *sub;
        while(cur) {
            sub=cur->next;
            cur->next=pre;
            pre=cur;
            cur=sub;
        }
        return pre;
    }
};
// @lc code=end

