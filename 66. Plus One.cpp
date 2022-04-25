/**
 * @problem name: 66. Plus One
 * @problem link: https://leetcode.com/problems/plus-one/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-24
 */


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carrier = true, isNine = true;

        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] != 9) {
                isNine = false;
                if (carrier == true) {
                    digits[i]++;
                    carrier = false;
                }
            }
            else if (digits[i] == 9) {
                if (carrier == true) {
                    digits[i] = 0;
                }
            }
        }

        if (isNine == true) {
            digits.resize(digits.size() + 1, 0);
            digits[0] = 1;
        }
        return digits;
    }
};