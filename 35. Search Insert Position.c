/**
 * @problem name: 35. Search Insert Position
 * @problem link: https://leetcode.com/problems/search-insert-position/
 *
 * @solution status: accepted
 * @solution time complexity: Linear O(log n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-19
 */


int searchInsert(int* nums, int numsSize, int target) {
    if (nums == NULL) return -1;

    int left = 0, right = numsSize - 1;

    while (left <= right) {

        int mid = (left + right) / 2;

        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return left;
}