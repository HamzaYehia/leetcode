/**
 * @problem name: Two Sum
 * @problem link: https://leetcode.com/problems/two-sum/
 *
 * @time complexity: O(n)
 * @space complexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date 2022-03-20
 */


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> previousNums;
        vector<int> results;

        for (int i = 0; i < nums.size(); i++) {

            int remaining = target - nums[i];
            map<int, int>::iterator value = previousNums.find(remaining);

            if (value != previousNums.end()) {
                results.push_back(value->second);
                results.push_back(i);
                return results;
            }
            else {
                previousNums.insert({ nums[i], i });
            }
        }

        return results;
    }
};
