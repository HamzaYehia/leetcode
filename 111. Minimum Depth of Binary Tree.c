int min(int x, int y) {
    return (x <= y) ? x : y;
}

int minDepth(struct TreeNode* root) {
    if (root == NULL) return 0;

    if (root->left == NULL) return minDepth(root->right) + 1;
    else if (root->right == NULL) return minDepth(root->left) + 1;

    return min(minDepth(root->left), minDepth(root->right)) + 1;
}

