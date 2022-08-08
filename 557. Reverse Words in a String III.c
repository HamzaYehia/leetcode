/**
 * @problem name: Reverse Words in a String III
 * @problem link: https://leetcode.com/problems/reverse-words-in-a-string-iii/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-08
 */


char* reverseWords(char* s) {
    int lastSpaceIndex = -1,
        sLength = strlen(s);

    for (int i = 0; i <= sLength; i++) {

        if (s[i] == ' ' || i == sLength) {

            int start = lastSpaceIndex + 1,
                end = i - 1;

            while (start < end) {
                char tempChar = s[start];
                s[start++] = s[end];
                s[end--] = tempChar;
            }

            lastSpaceIndex = i;
        }
    }
    return s;
}