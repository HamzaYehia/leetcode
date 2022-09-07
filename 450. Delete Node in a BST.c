/**
 * @problem name: Delete Node in a BST
 * @problem link: https://leetcode.com/problems/delete-node-in-a-bst/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Sep-07
 */


struct TreeNode* findMin(struct TreeNode* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root == NULL) return root;

    else if (key < root->val) root->left = deleteNode(root->left, key);
    else if (key > root->val) root->right = deleteNode(root->right, key);

    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        }

        else if (root->left == NULL) {
            struct TreeNode* tempRoot = root;
            root = root->right;
            free(tempRoot);
        }
        else if (root->right == NULL) {
            struct TreeNode* tempRoot = root;
            root = root->left;
            free(tempRoot);
        }

        else {
            struct TreeNode* minOfRightSub = findMin(root->right);
            root->val = minOfRightSub->val;
            root->right = deleteNode(root->right, minOfRightSub->val);
        }
    }

    return root;
}