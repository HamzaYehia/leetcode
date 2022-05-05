/**
 * @problem name: 13. Roman to Integer
 * @problem link: https://leetcode.com/problems/roman-to-integer/
 *
 * @solution status: accepted
 * @solution time complexity: O(n) Where (n) is the length's of string (s)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-30
 */

class Solution {
public:
    int romanToInt(string s) {

        map<char, int> RomanSymbols{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };

        // (finalInt) initial value = last element in (s)
        int finalInt = RomanSymbols[s[s.length() - 1]];

        for (int i = s.length() - 1; i > 0; i--) {
            if (RomanSymbols[s[i]] <= RomanSymbols[s[i - 1]]) {
                finalInt += RomanSymbols[s[i - 1]];
            }
            else {
                finalInt -= RomanSymbols[s[i - 1]];
            }
        }
        return finalInt;
    }
};