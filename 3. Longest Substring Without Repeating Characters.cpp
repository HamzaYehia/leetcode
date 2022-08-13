/**
 * @problem name: 3. Longest Substring Without Repeating Characters
 * @problem link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-May-5
 */


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longestSubstring = 0;
        map<char, int> characters;

        for (int left = 0, right = 0; right < s.length(); right++) {

            if (characters.find(s[right]) != characters.end()) {
                left = max(left, characters[s[right]]);
                characters.erase(s[right]);
            }

            // do this anyway
            characters.insert({ s[right], right + 1 });
            longestSubstring = max(longestSubstring, right + 1 - left);
        }

        return longestSubstring;
    }
};