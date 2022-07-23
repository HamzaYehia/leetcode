/**
 * @problem name: Binary Tree Level Order Traversal
 * @problem link: https://leetcode.com/problems/binary-tree-level-order-traversal/
 *
 * @time complexity: O(V + E)
 * @space comlexity: O(V)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-23
 */


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> finalNodes;
        queue<TreeNode*> discovered;

        if (root == nullptr) return finalNodes;

        discovered.push(root);

        while (discovered.empty() != true) {
            int numberOfCurrentLevelNodes = discovered.size();

            vector<int> currentLevelNodes;

            while (numberOfCurrentLevelNodes--) {

                TreeNode* front = discovered.front();
                currentLevelNodes.push_back(front->val);

                if (front->left != NULL) discovered.push(front->left);
                if (front->right != NULL) discovered.push(front->right);

                discovered.pop();
            }
            finalNodes.push_back(currentLevelNodes);
        }

        return finalNodes;
    }
};