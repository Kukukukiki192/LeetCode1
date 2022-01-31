/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] 整数拆分
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(N^2) SC:O(N) 动态规划-每个正整数对应的最大乘积取决于比它小的正整数对应的最大乘积
    int integerBreak(int n) {
        //dp[i]:i的最大乘积 从1开始拆分n
        vector<int> dp(n+1);
        for(int i=2;i<=n;i++) {
            for(int j=1;j<i;j++) {
                dp[i]=max({dp[i],j*(i-j),j*dp[i-j]}); //每次计算dp[i]取最大
            }
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        return dp[n];
    }
};
// @lc code=end

int main() {
    int n;
    cin>>n;
    Solution s;
    cout<<s.integerBreak(n);
    return 0;
}