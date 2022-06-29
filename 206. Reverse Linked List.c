/**
 * @problem name: Reverse Linked List
 * @problem link: https://leetcode.com/problems/reverse-linked-list/
 *
 * @solution time complexity: O(n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jun-29
 */


struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* prev, * current, * following;

    prev = NULL;
    current = head;

    while (current != NULL) {
        following = current->next;

        current->next = prev;

        prev = current;
        current = following;
    }

    return prev;
}