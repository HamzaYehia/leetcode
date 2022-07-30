/**
 * @problem name: Same Tree
 * @problem link: https://leetcode.com/problems/same-tree/
 *
 * @time complexity: O(n)
 * @space comlexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-31
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;

    if (p->val != q->val) return false;

    return(isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}