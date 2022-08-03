/**
 * @problem name: Two Sum II - Input Array Is Sorted
 * @problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-03
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> results;

        int left = 0, right = numbers.size() - 1;

        while (numbers[left] + numbers[right] != target) {
            if (numbers[left] + numbers[right] < target) left++;
            if (numbers[left] + numbers[right] > target) right--;
        }

        results.push_back(left + 1);
        results.push_back(right + 1);

        return results;
    }
};