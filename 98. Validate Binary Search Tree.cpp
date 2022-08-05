/**
 * @problem name: Validate Binary Search Tree
 * @problem link: https://leetcode.com/problems/validate-binary-search-tree/
 *
 * @time complexity: O(n)
 * @space complexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-27
 */


class Solution {
public:
    long previousNodeValue = -2147483649;
    bool isBST = true;

    bool isValidBST(struct TreeNode* root) {
        if (root == nullptr) {
            return isBST;
        };

        isValidBST(root->left);

        if (root->val <= previousNodeValue) {
            isBST = false;
            return isBST;
        };
        previousNodeValue = root->val;

        isValidBST(root->right);

        return isBST;
    }
};