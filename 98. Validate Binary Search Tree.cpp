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
    bool isValid = true;

    vector<int> BSTelements;

    void insertInVec(TreeNode* root) {
        if (root == nullptr) return;

        insertInVec(root->left);

        BSTelements.push_back(root->val);
        insertInVec(root->right);
    }

    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;

        insertInVec(root);

        for (vector<int>::iterator i = BSTelements.begin() + 1; i != BSTelements.end(); i++) {
            if (*i <= *(i - 1)) isValid = false;
        }

        return isValid;
    }
};