/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    //TC:O(logN)二分查找 SC:O(1)
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        if(target<nums[0] || target>nums[r]) return -1;//减少重复循环
        while(l<=r) {
            int m=l+(r-l)/2;
            if(target<nums[m]) r=m-1;
            else if(target>nums[m]) l=m+1;
            else return m;
        }
        return -1;
    }
};
// @lc code=end

