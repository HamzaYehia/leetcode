/**
 * @problem name: 3. Longest Substring Without Repeating Characters
 * @problem link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 * @solution time complexity: O(n)  Where (n) = length of the string (s)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-May-5
 */


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest_substring = 0;

        map<char, int> characters;

        for (int i = 0, j = 0; i < s.length(); i++) {
            if (characters.find(s[i]) != characters.end()) {
                j = characters[s[i] + 1];
                characters.erase(s[i]);
            }
            // do this anyway
            characters.insert(pair<char, int>(s[i], i + 1));
            longest_substring = max(longest_substring, i - j + 1);
        }
        return longest_substring;
    }
};