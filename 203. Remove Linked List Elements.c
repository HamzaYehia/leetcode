/**
 * @problem name: 203. Remove Linked List Elements
 * @problem link: https://leetcode.com/problems/remove-linked-list-elements/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-May-09
 */


struct ListNode* removeElements(struct ListNode* head, int val) {

    if (head == NULL) return NULL;

    struct ListNode* following_node = head->next;
    struct ListNode* temp_head = head;

    while (following_node != NULL) {
        if (following_node->val == val) {
            following_node = following_node->next;
            temp_head->next = following_node;
        }
        else {
            following_node = following_node->next;
            temp_head = temp_head->next;
        }
    }

    if (head->val == val) head = head->next;

    return head;
}