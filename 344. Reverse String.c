/**
 * @problem name: Reverse String
 * @problem link: https://leetcode.com/problems/reverse-string/
 *
 * @solution time complexity: O(n/2)
 * @solution space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-5
 */



void reverseString(char* s, int sSize) {
    if (sSize == 0 || sSize == 1) return;

    int left = 0, right = sSize - 1;

    char tempChar = NULL;

    while (left < right) {
        tempChar = s[left];

        s[left] = s[right];
        s[right] = tempChar;

        left++;
        right--;
    }
}