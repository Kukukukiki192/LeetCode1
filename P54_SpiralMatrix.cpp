/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(MN) SC:O(1)  mn-输入矩阵行列数
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<int> v;
        int loop=min(m,n)/2;
        for(int i=0;i<loop;i++) {
            for(int j=i;j<n-i-1;j++) v.push_back(matrix[i][j]);
            for(int j=i;j<m-i-1;j++) v.push_back(matrix[j][n-i-1]);
            for(int j=n-i-1;j>i;j--) v.push_back(matrix[m-i-1][j]);
            for(int j=m-i-1;j>i;j--) v.push_back(matrix[j][i]);
        }
        if(m==n && m%2) v.push_back(matrix[m/2][m/2]);
        else if(m<n && m%2) {
            for(int j=m/2;j<n-m/2;j++) v.push_back(matrix[m/2][j]);
        } else if(m>n && n%2) {
            for(int j=n/2;j<m-n/2;j++) v.push_back(matrix[j][n/2]);
        }
        return v;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<vector<int>> matrix={{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> v=s.spiralOrder(matrix);
    cout<<"[ ";
    for(auto t: v) {
        cout<<t<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}