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


int removeDuplicates(int* nums, int numsSize) {
    int k = 1;

    for (int i = 1; i < numsSize;i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}