/**
 * @problem name: Replace All Digits with Characters
 * @problem link: https://leetcode.com/problems/replace-all-digits-with-characters/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-13
 */


char* replaceDigits(char* s) {
    char currentChar = 'a';
    
    for (int i = 1; s[i] != '\0'; i++) {
        currentChar = s[i - 1];
        if (s[i] >= '0' && s[i] <= '9') {
            currentChar += s[i] - 48;
            s[i] = currentChar;
        }
    }
    
    return s;
}
