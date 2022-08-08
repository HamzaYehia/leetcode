/**
 * @problem name: Reverse String II
 * @problem link: https://leetcode.com/problems/reverse-string-ii/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-08
 */


class Solution {
public:
    string reverseStr(string s, int k) {

        if (k > s.size()) {
            reverse(s.begin(), s.end());
            return s;
        };

        for (int i = 0; i < s.size(); i += 2 * k) {

            int start = i;
            int end = min<int>(i + k - 1, s.size() - 1);

            while (start < end) {
                char tempChar = s[start];

                s[start++] = s[end];
                s[end--] = tempChar;

            }
        }

        return s;
    }
};