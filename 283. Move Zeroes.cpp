/**
 * @problem name: Move Zeroes
 * @problem link: https://leetcode.com/problems/move-zeroes/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-09
 */


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZero = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) nums[lastNonZero++] = nums[i];
        }

        for (; lastNonZero < nums.size(); lastNonZero++) {
            nums[lastNonZero] = 0;
        }
    }
};