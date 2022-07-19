/**
 * @problem name: Power of Three
 * @problem link: https://leetcode.com/problems/power-of-three/
 *
 * @solution time complexity: O(1)
 * @solution space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-19
 */


bool isPowerOfThree(int n) {
    if (n == 0) return false;

    int logOfN = log_a_to_base_b(n, 3);

    return (n == pow(3, logOfN)) ? true : false;
}

int log_a_to_base_b(int a, int b) {
    return log2(a) / log2(b);
}