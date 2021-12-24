/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //TC:O(N) SC:O(1)
    void moveZeroes(vector<int>& nums) {
        int slow=0;
        for(int fast: nums){
            if(fast!=0) nums[slow++]=fast;
        }
        while(slow<nums.size()){
            nums[slow++]=0;
        }
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> nums={0,1,0,3,12};
    s.moveZeroes(nums);
    cout<<"[";
    for (int i=0; i<nums.size()-1; i++) {
        cout<<nums[i]<<",";
    }
    cout<<nums[nums.size()-1]<<"]"<<endl;
    return 0;
}