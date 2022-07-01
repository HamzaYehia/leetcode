"""
 @problem name: Binary Search
 @problem link: https://leetcode.com/problems/binary-search/
 @solution time complexity: O(log n)
 @solution status: accepted
 @author: Hamza Yehia (github.com/HamzaYehia)
 @date: 2022-Jul-1
"""

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        left, right = 0, len(nums) - 1
        
        while(left <= right):
            mid = left + ((right - left) // 2)
            
            if target == nums[mid]:
                return mid
            
            elif target > nums[mid]:
                left = mid + 1
                
            elif target < nums[mid]:
                right = mid - 1
                
        return -1
