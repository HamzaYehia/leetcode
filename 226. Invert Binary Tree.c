/**
 * @problem name: Invert Binary Tree
 * @problem link: https://leetcode.com/problems/invert-binary-tree/
 *
 * @time complexity: O(n)
 * @space comlexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-04
 */


struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) return NULL;

    struct TreeNode* temporaryLeft = root->left;

    root->left = root->right;
    root->right = temporaryLeft;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}