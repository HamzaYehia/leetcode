/**
 * @problem name: 136. Single Number
 * @problem link: https://leetcode.com/problems/single-number/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-May-28
 */


int singleNumber(int* nums, int numsSize) {

    int answer = 0;

    for (int i = 0; i < numsSize; i++) {
        answer ^= nums[i];
    }

    return answer;
}