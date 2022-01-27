/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
 * Definition for singly-linked list.*/

class Solution {
public:
    //TC:O(N) SC:O(1)
    ListNode* swapPairs(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        auto dummy=new ListNode(-1,head), pre=dummy, p=head;
        while(p && p->next) {
            auto t=p->next->next;
            pre->next=p->next;
            p->next->next=p;
            p->next=t;
            pre=p;
            p=p->next;
        }
        return dummy->next;
    }
};
// @lc code=end

int main(){
    Solution s;
    int n;
    cin>>n;
    auto dummy=new ListNode(-1), pre=dummy;
    int val;
    while(n--) {
        cin>>val;
        pre->next=new ListNode(val);
        pre=pre->next;
    }
    auto head=s.swapPairs(dummy->next);
    while(head) {
        cout<<head->val<<" ";
        head=head->next;
    }

    return 0;
}