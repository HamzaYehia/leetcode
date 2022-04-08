/**
 * @problem name: Palindrome Number
 * @problem link: https://leetcode.com/problems/palindrome-number/
 *
 * @solution status: accepted
 * @solution time complexity: Linear O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-08
 */


public class Solution {
    public bool IsPalindrome(int x) {
        int reverse = 0;
        int original = x;

        while (x > 0)
        {
            // error handling
            if (reverse > int.MaxValue) return false;
            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }

        return reverse == original;
    }  
}
