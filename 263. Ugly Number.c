/**
 * @problem name: Ugly Number
 * @problem link: https://leetcode.com/problems/ugly-number/
 *
 * @time complexity: O(log n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-01
 */


bool isUgly(int n) {
    if (n <= 0) return false;

    int primeFactors[3] = { 2, 3, 5 };

    for (int i = 0; i < 3; i++) {
        while (n % primeFactors[i] == 0) {
            n /= primeFactors[i];
        }
    }

    return (n == 1);
}