/**
 * @problem name: Balanced Binary Tree
 * @problem link: https://leetcode.com/problems/balanced-binary-tree/
 *
 * @time complexity: O(n)
 * @space comlexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-07
 */


int findHeight(struct TreeNode* root) {
    if (root == NULL) return 0;

    return max(findHeight(root->left),
        findHeight(root->right)) + 1;
}

bool isBalanced(struct TreeNode* root) {
    if (root == NULL) return true;

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    if (abs(leftHeight - rightHeight) > 1) return false;

    return isBalanced(root->left) && isBalanced(root->right);
}


int max(int x, int y) {
    return (x > y) ? x : y;
}