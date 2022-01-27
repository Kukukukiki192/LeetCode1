/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    //计算链表长度
    int Length(ListNode *head) {
        int length=0;
        while(head) {
            head=head->next;
            length++;
        }
        return length;
    }
    /**
     * @brief A、B从末尾到交点有一段相同的节点
     * 计算A、B长度-计算长度差值-长的跳过差值开始与短的比较
     * 节点值相同则找到交点-没有值相同的节点则无交点
     * 交点不是数值相等,是指针相等
     * TC:O(M+N) SC:O(1)
     */
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        int la=Length(headA),lb=Length(headB);
        auto a=headA,b=headB;
        if(la<lb) {
            swap(la,lb);//a为长的
            swap(a,b);
        }
        int gap=la-lb;
        while(gap--) {
            a=a->next;
        }
        while(a) {
            // if(a->val==b->val) return a; //error:交点不是数值相等,是指针相等
            if(a==b) return a;
            a=a->next;
            b=b->next;
        }
        return NULL;
    }
};
// @lc code=end

int main() {
    // int intersectVal = 2, skipA = 3, skipB = 1;
    // vector<int> listA = {1,9,1,2,4}, listB = {3,2,4};
    int intersectVal = 8, skipA = 2, skipB = 3;
    vector<int> listA = {4,1,8,4,5}, listB = {5,6,1,8,4,5};
    ListNode *dummyA=new ListNode(-1),*dummyB=new ListNode(-1);
    auto a=dummyA,b=dummyB;
    for(int v: listA) {
        a->next=new ListNode(v);
        a=a->next;
    }
    for(int i=0;i<skipB;i++) {
        b->next=new ListNode(listB[i]);
        b=b->next;
    }
    a=dummyA;
    while(skipA--) {
        a=a->next;
    }
    b->next=a->next;

    Solution s;
    auto ans=s.getIntersectionNode(dummyA->next,dummyB->next);
    cout<<"Intersected at '"<<ans->val<<"'"<<endl;

    return 0;
}