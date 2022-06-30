/**
 * @problem name: Delete Node in a Linked List
 * @problem link: https://leetcode.com/problems/delete-node-in-a-linked-list/
 *
 * @solution time complexity: O(1)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-May-10
 */


void deleteNode(struct ListNode* node) {
    struct ListNode* following = node->next;
    node->val = following->val;
    node->next = following->next;
    free(following);
}