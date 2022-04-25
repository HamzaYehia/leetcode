/**
 * @problem name: 53. Maximum Subarray
 * @problem link: https://leetcode.com/problems/maximum-subarray/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-25
 */


#define int32Min -2147483648;

int max(int first, int second);

int maxSubArray(int* nums, int numsSize) {

    int currentMax = 0, PreviousMax = int32Min;

    for (int i = 0; i < numsSize; i++) {
        currentMax += nums[i];
        PreviousMax = max(PreviousMax, currentMax);
        if (currentMax < 0) currentMax = 0;
    }
    return PreviousMax;
}

int max(int first, int second) {
    return (first > second) ? first : second;
}