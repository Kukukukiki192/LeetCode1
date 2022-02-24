/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    /**
     * @brief 递归
     * TC = 递归次数(递归树节点个数) * 每次递归的TC = O(2^N)
     * SC = 递归深度 * 每次递归的SC = O(N)
     * 题目有时间限制会TimeOut->答案需要取模1e9+7(1000000007),如计算初始结果为:1000000008,请返回1
     */
    int fib(int n) {
        if (n < 2) return n;
        return (fib(n - 1) + fib(n - 2)) % 1000000007; //每次递归的TC=O(1)
    }

    //TC:O(N) SC:O(N) 动态规划-dp数组
    int fib(int n) {
        if (n < 2) return n;
        // vector<int> dp(n+1,0); //只初始化2个,就不全初始化为0
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
        }
        return dp[n];
    }

    //TC:O(N) SC:O(1) 细节优化(状态压缩-缩小DPtable的大小)
    int fib(int n) {
        if (n < 2) return n;
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = (a + b) % 1000000007;
            a = b;
            b = c;
        }
        return c;
    }
};
// @lc code=end

int main() {
    int n;
    cin >> n;
    Solution s;
    cout << s.fib(n) << endl;
    return 0;
}