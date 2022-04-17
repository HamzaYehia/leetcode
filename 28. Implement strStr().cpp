/**
 * @problem name: 28. Implement strStr()
 * @problem link: https://leetcode.com/problems/implement-strstr/
 *
 * @solution time complexity: O(2n)  Where: n = haystack
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-17
 */


class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        for (int i = 0; i < haystack.size(); i++) {
            if (needle[0] == haystack[i]) {
                index = i;
                for (int j = 1; j < needle.size() && (i + j) <= haystack.size(); j++) {
                    if (needle[j] != haystack[i + j]) {
                        index = -1;
                    }
                }
            }
            if (index == i) { break; }
        }
        return index;
    }
};