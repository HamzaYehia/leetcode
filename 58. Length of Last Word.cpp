/**
 * @problem name: 58. Length of Last Word
 * @problem link: https://leetcode.com/problems/length-of-last-word/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-17
 */


class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordLength = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                for (int j = i; j >= 0; j--)
                {
                    if (s[j] == ' ') return lastWordLength;
                    lastWordLength++;
                }
                return lastWordLength;
            }
        }
        return lastWordLength;
    }
};