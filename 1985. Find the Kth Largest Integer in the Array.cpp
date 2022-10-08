/**
 * @problem name: Find the Kth Largest Integer in the Array
 * @problem link: https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
 *
 * @time complexity: O(n log n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date 2022-Oct-08
 */


class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {

        // make max heap 
        make_heap(nums.begin(), nums.end(), comparator); // O(n)

        while (--k) {   // remove the max (k - 1) times. O(k log n)
            pop_heap(nums.begin(), nums.end(), comparator);
            nums.pop_back();
        }

        return nums.front();
    }

    static bool comparator(string& a, string& b);
};


bool Solution::comparator(string& a, string& b) {
    if (a.size() == b.size()) {
        return a < b;
    }

    return a.size() < b.size();
}