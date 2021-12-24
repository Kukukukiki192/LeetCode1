/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(N) SC:O()
    vector<int> sortedSquares(vector<int>& nums) {
        //1.i^2后排序 sort(nums.begin(),nums.end())快排O(NlogN)
        //2.双指针指向2端<-(i^2)max只会在2端不会在中间
        int n=nums.size();
        vector<int> ans(n);
        int l=0, r=n-1, k=r;
        while(k>=0) { //k>=0 l<=r
            if(nums[l]*nums[l]>nums[r]*nums[r]) ans[k--]=nums[l]*nums[l++];
            else ans[k--]=nums[r]*nums[r--];
        }
        return ans;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> nums={-7,-3,2,3,11}; //-7,-3,2,3,11  -4,-1,0,3,10
    vector<int> v=s.sortedSquares(nums);
    cout<<"[ ";
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<"]"<<endl;

    return 0;
}