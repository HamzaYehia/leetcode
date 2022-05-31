/**
 * @problem name: 125. Valid Palindrome
 * @problem link: https://leetcode.com/problems/valid-palindrome/
 *
 * @solution status: accepted
 * @solution time complexity: O(2n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-May-31
 */


string toLowerAndRemoveNonAlphanumeric(string str) {
    string finalString = "";
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            finalString += tolower(str[i]);
        }
    }
    return finalString;
}


class Solution {
public:
    bool isPalindrome(string s) {

        if (s.length() == 1) return true;

        s = toLowerAndRemoveNonAlphanumeric(s);

        bool isPalindrome = true;

        // Sliding Window Technique
        for (int leftSide = 0, rightSide = s.length() - 1; leftSide < rightSide; leftSide++, rightSide--) {

            if (s[leftSide] != s[rightSide]) {
                isPalindrome = false;
                break;
            }
        }

        return isPalindrome;
    }
};