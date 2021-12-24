/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(N) SC:O(1)
    int removeElement(vector<int>& nums, int val) {
        int slow=0;
        for(int fast: nums){
            if(val!=fast) nums[slow++]=fast;
        }
        // for(int fast=0;fast<nums.size();fast++){
        //     if(val!=nums[fast]) nums[slow++]=nums[fast];
        // }
        return slow;
        // nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        // return nums.size();
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int len = s.removeElement(nums, val);
    cout<<len<<", nums = [";
    for (int i = 0; i < len-1; i++) {
        cout<<nums[i]<<",";
    }
    cout<<nums[len-1]<<"]"<<endl;
    return 0;
}