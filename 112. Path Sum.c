/**
 * @problem name: Path Sum
 * @problem link: https://leetcode.com/problems/path-sum/
 *
 * @time complexity: O(n)
 * @space comlexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-05
 */


bool dfs(struct TreeNode* root, int targetSum, int currentSum) {
    if (root == NULL) return false;

    currentSum += root->val;

    if (root->left == NULL && root->right == NULL) {
        if (currentSum == targetSum) return true;
    }

    return dfs(root->left, targetSum, currentSum) ||
        dfs(root->right, targetSum, currentSum);
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    int currentSum = 0;

    return dfs(root, targetSum, currentSum);
}