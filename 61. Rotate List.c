/**
 * @problem name: Rotate List
 * @problem link: https://leetcode.com/problems/rotate-list/
 *
 * @solution time complexity: O(n) where n = length of the linked list
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jun-28
 */

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k == 0) return head;

    int length = 1;
    struct ListNode* tail = head;

    while (tail->next != NULL) {
        length += 1;
        tail = tail->next;
    }

    k %= length;
    if (k == 0) return head;

    struct ListNode* current_node = head;

    for (int i = 0; i < length - k - 1; i++) {
        current_node = current_node->next;
    }

    tail->next = head;
    head = current_node->next;
    current_node->next = NULL;

    return head;
}