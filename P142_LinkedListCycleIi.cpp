/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
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
    //TC:O(N) SC:O(1) 环->快慢指针
    ListNode *detectCycle(ListNode *head) {
        auto slow=head,fast=head;
        while(fast && fast->next) {
            slow=slow->next;
            fast=fast->next->next; //while (!fast)会造成此处空指针异常
            if(slow==fast) {
                auto a=head,b=slow;
                while(a!=b) { //推导数学关系
                    a=a->next;
                    b=b->next;
                }
                return a; //相遇节点即环入口    
            }
        }
        return NULL;
    }
};
// @lc code=end

int main(){
    vector<int> head = {3,2,0,-4};
    int pos = 1;
    auto dummy=new ListNode(-1),p=dummy;
    for(int v: head) {
        p->next=new ListNode(v);
        p=p->next;
    }
    auto posNode=dummy->next;
    while(pos--) {
        posNode=posNode->next;
    }
    p->next=posNode;

    Solution s;
    auto ans=s.detectCycle(dummy->next);
    cout<<ans->val<<endl;

    return 0;
}