/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(N) SC:O(1) 双指针
    bool backspaceCompare(string s, string t) {
        // int i=s.length()-1, j=t.length()-1, nS=0, nT=0;
        // while(i>=0 || j>=0) {
        //     while(i>=0){
        //         if(s[i]=='#') { nS++; i--; }
        //         else if(nS) { nS--; i--; }
        //         else break;
        //     }
        //     while(j>=0){
        //         if(t[j]=='#') { nT++; j--; }
        //         else if(nT) { nT--; j--; }
        //         else break;
        //     }
        //     if(i>=0 && j>=0){       //字符不等
        //         if(s[i]!=t[j]) return false;
        //     } else if(i>=0 || j>=0){//1个有字符 1个空
        //         return false;
        //     }                       //其它 2个空
        //     i--;
        //     j--;
        // }
        // return true;
        return build(s)==build(t);
    }

    //TC:O(N) SC:O(N) 压栈
    string build(string s) {
        string r;
        //遍历s 压栈 遇到'#'弹出上一个字符
        for(char c: s){
            if(c!='#') r.push_back(c);
            else if(!r.empty()) r.pop_back(); //一定要做判空检查
        }
        return r;
    }
};
// @lc code=end

int main(){
    Solution so;
    string s,t;
    cin>>s>>t;//xywrrmp xywrrmu#p
    cout<<so.backspaceCompare(s,t)<<endl;
    return 0;
}