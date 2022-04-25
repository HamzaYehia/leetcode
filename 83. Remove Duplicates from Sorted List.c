/**
 * @problem name: 83. Remove Duplicates from Sorted List
 * @problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 *
 * @solution time complexity: O(n)  where n = the number of elements in the list
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-25
 */


struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* previous = head;
    struct ListNode* current = head->next;

    while (current != NULL) {
        if (current->val == previous->val) {
            previous->next = current->next;
            current = current->next;
        }
        else {
            current = current->next;
            previous = previous->next;
        }
    }

    return head;
}