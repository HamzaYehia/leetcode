/**
 * @problem name: Convert Sorted Array to Binary Search Tree
 * @problem link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
 *
 * @time complexity: O(n)
 * @space complexity: O(log n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Sep-22
 */


struct TreeNode* helper(int* nums, int left, int right) {
    if (left > right) return NULL;

    int middle = (left + right) / 2;

    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    root->val = nums[middle];

    root->left = helper(nums, left, middle - 1);
    root->right = helper(nums, middle + 1, right);

    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if (numsSize == 0) return NULL;

    return helper(nums, 0, numsSize - 1);
}
