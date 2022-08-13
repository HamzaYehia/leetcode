/**
 * @problem name: Reverse Integer
 * @problem link: https://leetcode.com/problems/reverse-integer/
 *
 * @time complexity: O(n)
 * @space comlexity: O(log n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-13
 */


int reverse(int x) {
    int reverse = 0;

    while (x != 0) {
        int pop = x % 10;
        x /= 10;

        if (reverse > INT_MAX / 10 ||
            (reverse == INT_MAX / 10 && pop > 7)) return 0;

        if (reverse < INT_MIN / 10 ||
            (reverse == INT_MIN / 10 && pop < -8)) return 0;

        reverse = (reverse * 10) + pop;
    }

    return reverse;
}