/*
 * @lc app=leetcode.cn id=96 lang=cpp
 *
 * [96] 不同的二叉搜索树
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    /**
     * @brief 动态规划 TC:O(N^2) SC:O(N) 
     * dp[n] n个节点的树的个数
     * f(i,n) 以i为根节点的树的个数
     * f(i,n)=dp[i-1]*dp[n-i]
     * dp[n]=(i:1~n)dp[i-1]*dp[n-i] dp[0]=dp[1]=1
     * @param n 
     * @return int 
     */
    int numTrees(int n) {
        vector<int> dp(n+1);
        dp[0]=dp[1]=1;
        for(int j=2;j<=n;j++) {
            for(int i=1;i<=j;i++) {
                dp[j]+=dp[i-1]*dp[j-i];
            }
            cout<<dp[j]<<" ";
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
    cout<<s.numTrees(n)<<endl;
    return 0;
}