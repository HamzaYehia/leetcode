/**
 * @problem name: 14. Longest Common Prefix
 * @problem link: https://leetcode.com/problems/longest-common-prefix/
 *
 * @solution time complexity: O(n + m)  where n = outer loop, m = inner loop
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-10
 */


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string firstString = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            /**
             * if firstString doesnt exist in string i
             * delete the last character in firstString
             * and try again
            */
            while (strs[i].find(firstString) != 0) {
                firstString = firstString.substr(0, firstString.length() - 1);
            }
            if (firstString == "") break;
        }

        return firstString;
    }
};