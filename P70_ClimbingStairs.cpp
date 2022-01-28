/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //动态规划 TC:O() SC:O()
    int climbStairs(int n) {
        /**
         * @brief 递归
         * TC = 递归次数(递归树节点个数) * 每次递归的TC = O(2^N)
         * SC = 递归深度 * 每次递归的SC = O(N)
         */
        // if(n<4) return n; 
        // return climbStairs(n-2)+climbStairs(n-1);

        //TC:O(N) SC:O(N) 动态规划-dp数组 
        // if(n<4) return n; 
        // vector<int> dp(n+1,0);
        // dp[1]=1,dp[2]=2;
        // for(int i=3;i<=n;i++) {
        //     dp[i]=dp[i-1]+dp[i-2];
        // }
        // return dp[n];

        //TC:O(N) SC:O(1) 细节优化(状态压缩-缩小DPtable的大小) 
        if(n<4) return n;
        int a=1,b=2,c;
        for(int i=3;i<=n;i++) {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};
// @lc code=end

int main() {
    int n;
    cin>>n;
    Solution s;
    cout<<s.climbStairs(n)<<endl;
    return 0;
}