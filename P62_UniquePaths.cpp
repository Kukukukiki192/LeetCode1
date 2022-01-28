/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        //TC:O(MN) SC:O(MN) 动态规划-dp数组 dp[i][j]:到达(i,j)的路径数 
        // vector<vector<int>> dp(m, vector<int>(n));
        // for(int i=0;i<m;i++) dp[i][0]=1;
        // for(int j=1;j<n;j++) dp[0][j]=1;
        // for(int i=1;i<m;i++) {
        //     for(int j=1;j<n;j++) {
        //         dp[i][j]=dp[i-1][j]+dp[i][j-1];
        //     }
        // }
        // return dp[m-1][n-1];

        //TC:O(MN) SC:O(N) 优化->一维(滚动)数组 
        // vector<int> dp(n);
        // for(int j=0;j<n;j++) dp[j]=1;
        // for(int i=1;i<m;i++) {
        //     for(int j=1;j<n;j++) {
        //         dp[j]+=dp[j-1];
        //     }
        // }
        // return dp[n-1];

        //TC:O(M) SC:O(1) 组合C(m+n-2,m-1):给m+n-2(总步数)个不同的数,取m-1(向下步数)个数
        //C(m+n-2,m-1)=(m+n-2)!/(n-1)!(m-1)!
        // int c1=m+n-2,c2=m-1,a=1,b=1;
        // while(c2) {
        //     a*=c1--; //error:int相乘溢出
        //     b*=c2--;
        //     cout<<a<<"/"<<b<<endl;
        // }
        // return a/b;

        int c1=m+n-2,c2=m-1,b=m-1;
        long long a=1;
        while(c2--) { //计算分子时不断除以分母
            a*=c1--;
            while(b && !(a%b)) {
                a/=b--;
            }
        }
        return a;
    }
};
// @lc code=end

int main() {
    Solution s;
    cout<<s.uniquePaths(3,2)<<endl;
    return 0;
}