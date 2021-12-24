/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(N^2) SC:O(1) 按层模拟 (n-给定的正整数 矩阵大小-n×n)
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));
        int x=1;    //存储矩阵的每一个元素
        for(int i=0;i<n/2;i++) {    //遍历一圈矩阵 由外到内要遍历n/2次
            for(int j=i;j<n-i-1;j++) matrix[i][j]=x++;
            for(int j=i;j<n-i-1;j++) matrix[j][n-i-1]=x++;
            for(int j=n-i-1;j>i;j--) matrix[n-i-1][j]=x++;
            for(int j=n-i-1;j>i;j--) matrix[j][i]=x++;
        }
        if(n%2) matrix[n/2][n/2]=x;
        return matrix;
    }
};
// @lc code=end

int main(){
    Solution s;
    int n;
    cin>>n;
    vector<vector<int>> ans=s.generateMatrix(n);
    cout<<'[';
    for(auto vv: ans){
        cout<<'[';
        for(auto v: vv){
            cout<<v<<' ';
        }
        cout<<"] ";
    }
    cout<<']'<<endl;
    
    return 0;
}