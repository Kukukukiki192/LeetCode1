/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    //TC:O(logN)二分查找 SC:O(1)
    bool isPerfectSquare(int num) {
        int l=0, r=num;
        long long m;
        while(l<=r) {
            m=l+(r-l)/2;
            if(m*m<=num) l=m+1;
            else r=m-1;
        }
        if(r*r==num) return true;
        return false;
    }
};
// @lc code=end

