/**
 * @problem name: 27. Remove Element
 * @problem link: https://leetcode.com/problems/remove-element/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-17
 */


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};