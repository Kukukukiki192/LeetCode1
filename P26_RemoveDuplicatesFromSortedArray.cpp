/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(N) SC:O(1)
    int removeDuplicates(vector<int>& nums) {
        int slow=nums.size()>0 ? 1 : 0;
        // for(int fast=1; fast<nums.size(); fast++){
        //     if(nums[fast-1]!=nums[fast]) nums[slow++]=nums[fast];
        // }
        for(int fast: nums) {
            if(fast!=nums[slow-1]) nums[slow++]=fast;
        }
        return slow;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> nums = {0,1,2,2,3,4};
    int len = s.removeDuplicates(nums);
    cout<<len<<", nums = [";
    for (int i = 0; i < len-1; i++) {
        cout<<nums[i]<<",";
    }
    cout<<nums[len-1]<<"]"<<endl;
    return 0;
}