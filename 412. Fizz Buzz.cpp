/**
 * @problem name: Fizz Buzz
 * @problem link: https://leetcode.com/problems/fizz-buzz/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-29
 */


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;

        for (int i = 1; i <= n; i++) {
            
            if (i % 3 == 0 && i % 5 == 0) answer.push_back("FizzBuzz");
            else if (i % 3 == 0) answer.push_back("Fizz");
            else if (i % 5 == 0) answer.push_back("Buzz");
            else answer.push_back(to_string(i));
            
        }
        
        return answer;
    }
};

