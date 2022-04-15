/**
 * @problem name: 26. Remove Duplicates from Sorted Array
 * @problem link: https://leetcode.com/problems/sqrtx/
 *
 * @solution time complexity: O(n^2)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-15
 */


public class Solution {
    public int RemoveDuplicates(int[] nums) {
            int k = 1;
            for (int i = nums.Length - 1; i > 0; i--)
            {
                if (nums[i] == nums[i - 1]) {
                    for (int j = i - 1; j < nums.Length - 1; j++)
                    {
                        nums[j] = nums[j + 1];
                    }
                }
                else {
                    k++;
                }
            }
            return k;
        }
}