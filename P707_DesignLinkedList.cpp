/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
//struct默认public->结构体 class默认private->类
//链表结构体
struct Node {
    int val;
    Node* next;
    Node(int val):val(val),next(NULL) {}
};

class MyLinkedList {
private:
    int size;    //链表长度
    Node* dummyHead;    //虚拟头节点

public:
    MyLinkedList() {
        size=0;
        dummyHead=new Node(0);
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        auto p=dummyHead->next;
        while(index--) {
            p=p->next;
        }
        return p->val;
    }

    void addAtHead(int val) {
        addAtIndex(0,val);  //方法中已有size++
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {//index从0开始
        if(index<0) index=0;
        if(index>size) return;
        Node* newNode=new Node(val);
        auto p=dummyHead;
        while(index--) {
            p=p->next;
        }
        newNode->next=p->next;
        p->next=newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;
        auto p=dummyHead;
        while(index--) {
            p=p->next;
        }
        auto t=p->next;
        p->next=p->next->next;
        delete t;
        size--;
    }

    void print() {
        if(size<=0) return;
        auto p=dummyHead->next;
        while(p) {
            cout<<p->val<<" ";
            p=p->next;
        }
        cout<<endl;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

int main() {
    MyLinkedList* obj = new MyLinkedList();
    int param_1 = obj->get(0);
    cout<<param_1<<endl;
    obj->addAtHead(37);
    obj->print();
    obj->addAtTail(5);
    obj->print();
    obj->addAtIndex(1,666);
    obj->print();
    obj->deleteAtIndex(0);
    obj->print();

    return 0;
}