/**
 * @problem name: Count Asterisks
 * @problem link: https://leetcode.com/problems/count-asterisks/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-02
 */


int countAsterisks(char* s) {
    bool isInPair = false;
    int asteriskCounter = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '|') {
            isInPair = (isInPair == false) ? true : false;
        }

        if (s[i] == '*' && isInPair == false) {
            asteriskCounter += 1;
        }
    }

    return asteriskCounter;
}