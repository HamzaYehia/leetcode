/**
 * @problem name: Fizz Buzz
 * @problem link: https://leetcode.com/problems/fizz-buzz/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-30
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


// Another scalable solution:

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> answers;
        int divisors[2] = { 3, 5 };

        map<int, string> fizzBuzzDict = {
            {3, "Fizz"}, {5, "Buzz"}
        };

        for (int num = 1; num <= n; num++) {

            string currentAnswer = "";

            for (int key : divisors) {
                if (num % key == 0) currentAnswer += fizzBuzzDict.at(key);
            }

            if (currentAnswer.empty()) {
                currentAnswer += to_string(num);
            }

            answers.push_back(currentAnswer);
        }

        return answers;
    }
};