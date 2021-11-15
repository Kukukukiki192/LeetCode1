/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    //TC:O(logN)二分查找 SC:O(1)
    int searchInsert(vector<int>& nums, int target) {
        int l=1,r=nums.size()-1;
        if(target<=nums[0]) return 0;
        if(target>nums[r]) return r+1;//减少重复循环
        while(l<=r){
            int m=l+(r-l)/2;
            if(target<nums[m]) r=m-1;
            else if(target>nums[m]) l=m+1;
            else return m;
        }
        return r+1;
    }
};
// @lc code=end

