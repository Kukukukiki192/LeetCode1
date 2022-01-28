/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //TC:O(N) SC:O(N) 动态规划-dp数组 
        //dp[i]到达第i个台阶所花费的最少体力
        //题目定义dp[i]为:第一步不花费体力,最后一步花费
        //此处定义第一步要花费体力,最后一步不用,因为已经支付了
        // int n=cost.size();
        // vector<int> dp(n,0);
        // dp[0]=cost[0];
        // dp[1]=cost[1];
        // for(int i=2;i<n;i++) {
        //     dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        // }
        // return min(dp[n-1],dp[n-2]);

        //TC:O(N) SC:O(1) 细节优化(状态压缩-缩小DPtable的大小)
        int n=cost.size(),a=cost[0],b=cost[1],c;
        for(int i=2;i<n;i++) {
            c=min(a,b)+cost[i];
            cout<<c<<" ";
            a=b;
            b=c;
        }
        cout<<endl;
        return min(a,b);
    }
};
// @lc code=end

int main() {
    Solution s;
    vector<int> cost={1,100,1,1,1,100,1,1,100,1};
    cout<<s.minCostClimbingStairs(cost)<<endl;
    return 0;
}