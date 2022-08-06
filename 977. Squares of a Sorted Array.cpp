/**
 * @problem name: Squares of a Sorted Array
 * @problem link: https://leetcode.com/problems/squares-of-a-sorted-array/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-06
 */


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());

        int left = 0, right = nums.size() - 1, index = nums.size() - 1;

        while (left <= right) {
            int squareOfLeft = nums[left] * nums[left],
                squareOfRight = nums[right] * nums[right];

            if (squareOfRight >= squareOfLeft) {
                squares[index] = squareOfRight;
                right--;
            }
            else {
                squares[index] = squareOfLeft;
                left++;
            }

            index--;
        }

        return squares;
    }
};