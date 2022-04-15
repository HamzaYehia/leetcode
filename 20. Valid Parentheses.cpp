/**
 * @problem name: 20. Valid Parentheses
 * @problem link: https://leetcode.com/problems/valid-parentheses/
 *
 * @solution time complexity: O(n) Where n is the length's of string (s)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-14
 */


class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        stack.push(' ');
        for (int i = 0; i < s.length(); i++) {

            if (stack.top() == '(' && s[i] == ')') {
                stack.pop();
            }
            else if (stack.top() == '[' && s[i] == ']') {
                stack.pop();
            }
            else if (stack.top() == '{' && s[i] == '}') {
                stack.pop();
            }
            else {
                stack.push(s[i]);
            }

        }

        stack.pop();
        return (stack.empty()) ? true : false;
    }
};