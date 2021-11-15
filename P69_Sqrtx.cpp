/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(logN)二分查找 SC:O(1)
    int mySqrt(int x) {
        //a^2<x<(a+1)^2 a是x的整数平方根
        int l=0, r=x;
        long long m;
        while(l<=r) {
            m=l+(r-l)/2;
            if(m*m<=x) l=m+1; 
//注意x输入为2147395599(>21,4748,3647)时,int型m*m大数相乘溢出变为负数,条件永真,返回结果2147395599
            else r=m-1;
        }
        return r;
    }
};
// @lc code=end

int main(){
    Solution s;
    cout<<s.mySqrt(2147395599)<<endl;
    return 0;
}