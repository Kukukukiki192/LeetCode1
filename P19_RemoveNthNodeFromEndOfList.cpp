/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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
    // int Length(ListNode* head) {
    //     int n=0;
    //     while(head) {
    //         n++;
    //         head=head->next;
    //     }
    //     return n;
    // }

    // //TC:O(N) SC:O(1)
    // ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     if(!head) return NULL;
    //     int x=Length(head)-n;
    //     auto dummy=new ListNode(-1,head), p=dummy;
    //     while(x--) {
    //         p=p->next;
    //     }
    //     auto t=p->next;
    //     p->next=p->next->next;
    //     delete t;
    //     return dummy->next;
    // }

    //TC:O(N) SC:O(1)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL;
        auto dummy=new ListNode(-1,head), slow=dummy, fast=dummy;
        while(n--) {
            fast=fast->next;
        }
        while(fast->next) {
            slow=slow->next;
            fast=fast->next;
        }
        auto t=slow->next;
        slow->next=slow->next->next;
        delete t;
        return dummy->next;
    }

};
// @lc code=end

int main() {
    Solution s;
    int n;
    cin>>n;
    auto dummy=new ListNode(-1), p=dummy;
    int val;
    while(n--) {
        cin>>val;
        p->next=new ListNode(val);
        p=p->next;
    }
    cin>>n;
    auto head=s.removeNthFromEnd(dummy->next, n);
    while(head) {
        cout<<head->val<<" ";
        head=head->next;
    }

    return 0;
}