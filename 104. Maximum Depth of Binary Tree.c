/**
 * @problem name: Maximum Depth of Binary Tree
 * @problem link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 *
 * @solution time complexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-19
 */


int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;

    return max(maxDepth(root->left),
        maxDepth(root->right)) + 1;
}

int max(int x, int y) {
    return (x > y) ? x : y;
}