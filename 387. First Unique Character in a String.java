/**
 * @problem name: First Unique Character in a String
 * @problem link: https://leetcode.com/problems/first-unique-character-in-a-string/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-03
 */


class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character, Integer> charCounter = new HashMap<Character, Integer>();
        
        int result = -1;
        
        for (int i = 0; i < s.length(); i++) {
            char current = s.charAt(i);
            charCounter.put(current, charCounter.getOrDefault(current, 0) + 1);
        }
        
        for (int i = 0; i < s.length(); i++) {
            if (charCounter.get(s.charAt(i)) == 1) {
                result = i;
                break;
            }
        }

         return result;
    }
}