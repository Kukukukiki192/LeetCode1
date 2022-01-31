/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(MN) SC:O(MN) 动态规划-dp数组 dp[i][j]:到达(i,j)的路径数
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]) return 0;
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,0));
        for(int i=0;i<m && !obstacleGrid[i][0];i++) dp[i][0]=1;
        for(int j=1;j<n && !obstacleGrid[0][j];j++) dp[0][j]=1;
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                if(!obstacleGrid[i][j]) {
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};
// @lc code=end

int main() {
    vector<vector<int>> obstacleGrid(1, vector<int>(2,0));
    obstacleGrid[0][0]=1;
    Solution s;
    cout<<s.uniquePathsWithObstacles(obstacleGrid)<<endl;
    return 0;
}