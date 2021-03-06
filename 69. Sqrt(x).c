/**
 * @problem name: 69. Sqrt(x)
 * @problem link: https://leetcode.com/problems/sqrtx/
 *
 * @solution time complexity: Worst case will never reach O(log n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-15
 */


int mySqrt(int x) {
    if (x == 1) return 1;
    double sqrt = x / 2;
    double temp = 0;

    while (sqrt != temp) {
        temp = sqrt;
        sqrt = (x / temp + temp) / 2;
    }
    return sqrt;
}