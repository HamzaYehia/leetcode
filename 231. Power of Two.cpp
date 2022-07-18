/**
 * @problem name: Power of Two
 * @problem link: https://leetcode.com/problems/power-of-two/
 *
 * @solution time complexity: O(1)
 * @solution space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-19
 */


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;

        return floor(log2(n)) == ceil(log2(n)) ? true : false;
    }
};
