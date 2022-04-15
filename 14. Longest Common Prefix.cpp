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
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(strs[0]) != 0) {
                strs[0] = strs[0].substr(0, strs[0].length() - 1);
            }
            if (strs[0] == "") break;
        }
        return strs[0];
    }
};