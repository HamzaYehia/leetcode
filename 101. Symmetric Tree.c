/**
 * @problem name: Symmetric Tree
 * @problem link: https://leetcode.com/problems/symmetric-tree/
 *
 * @time complexity: O(n)
 * @space comlexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-02
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;

    if (p->val != q->val) return false;

    return(isSameTree(p->left, q->right) && isSameTree(p->right, q->left));
}

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL) return true;

    return isSameTree(root->right, root->left);
}