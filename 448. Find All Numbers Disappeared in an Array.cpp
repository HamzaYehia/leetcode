/**
 * @problem name: Find All Numbers Disappeared in an Array
 * @problem link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2023-Feb-03
 */


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> disappearedNumbers;

        for (int i = 0; i < nums.size(); i++) {
            int currentNum = abs(nums[i]) - 1;
            nums[currentNum] = -1 * abs(nums[currentNum]);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) disappearedNumbers.push_back(i + 1);
        }

        return disappearedNumbers;
    }
};