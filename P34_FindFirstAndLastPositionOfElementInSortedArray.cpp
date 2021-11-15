/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(logN)二分查找 SC:O(1)
    int binarySearch(vector<int>& nums, int target, bool flag){
        //border标志边界位置(不包含target),不设为-1是因为当target==nums[0]时,左边界为-1
        int l=0,r=nums.size()-1,border=-2; 
        if(r==-1 || target<nums[l] || target>nums[r]) return border; //数组为空/超范围
        while(l<=r){
            int m=l+(r-l)/2;
            if(flag){ //寻找左边界
                if(target<=nums[m]) {
                    r=m-1;
                    border=r;
                }
                else l=m+1;
            } else { //寻找右边界
                if(target>=nums[m]) {
                    l=m+1;
                    border=l;
                }
                else r=m-1;
            }  
        }
        return border;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBorder=binarySearch(nums, target, true);
        int rightBorder=binarySearch(nums, target, false);
        //3种情况 nums={3,6,7} target->(l,r)->ans
        if(leftBorder==-2 || rightBorder==-2) return {-1,-1}; //超范围 target=2/8->(-2,-2)->{-1,-1}
        if(rightBorder-leftBorder>1) return {leftBorder+1, rightBorder-1}; //存在 target=6->(0,2)->{1,1}
        return {-1,-1}; //不存在target target=5->(0,1)->{-1,-1}
    }
};
// @lc code=end

int main() {
    Solution s;
    // vector<int> nums={5,7,7,8,8,10};
    vector<int> nums={};
    int target=0;
    vector<int> ans=s.searchRange(nums, target);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;

    return 0;
}