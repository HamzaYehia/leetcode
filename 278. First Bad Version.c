/**
 * @problem name: First Bad Version
 * @problem link: https://leetcode.com/problems/first-bad-version/
 *
 * @time complexity: O(log n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-05
 */


int firstBadVersion(int n) {

    int left = 1, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) right = mid;
        else left = mid + 1;
    }

    return left;
}