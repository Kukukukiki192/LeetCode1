/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
// @lc code=start
//Definition for singly-linked list.

class Solution {
public:
    //TC:O(N) SC:O(1)
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode* v=new ListNode(-1,head);  //用虚拟头
        auto p=v;
        while(p->next) {
            if(p->next->val==val) {
                auto t=p->next;
                p->next=p->next->next;
                delete t;
            }
            else p=p->next;           
        }
        head=v->next;
        delete v;
        return head;
    }

    // ListNode* removeElements(ListNode* head, int val) {
    //     while(head && head->val==val) {
    //         auto t=head;
    //         head=head->next;//单独处理头
    //         delete t;
    //     }//结果:结点数 0/1/>=2
    //     //当前结点应为null/head->next
    //     //auto pre=head,p=head->next; 若head==null,head->next会发生空指针异常
    //     auto p=head;
    //     while(p && p->next) {
    //         if(p->next->val==val) {
    //             auto t=p->next;
    //             p->next=p->next->next;
    //             delete t;
    //         }
    //         else p=p->next;           
    //     }
    //     return head;
    // }
};
// @lc code=end

