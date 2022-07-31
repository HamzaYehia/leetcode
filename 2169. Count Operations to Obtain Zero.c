/**
 * @problem name: Count Operations to Obtain Zero
 * @problem link: https://leetcode.com/problems/count-operations-to-obtain-zero/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-31
 */


int countOperations(int num1, int num2) {
    int numberOfOperations = 0;

    while (num1 != 0 && num2 != 0) {

        if (num1 > num2) num1 -= num2;
        else num2 -= num1;

        numberOfOperations++;
    }

    return numberOfOperations;
}