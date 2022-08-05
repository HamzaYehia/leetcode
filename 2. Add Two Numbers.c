/**
 * @problem name: 2. Add Two Numbers
 * @problem link: https://leetcode.com/problems/add-two-numbers/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-1
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;

    struct ListNode* head = (struct ListNode*)malloc(1 * sizeof(struct ListNode));
    head->val = 0;
    struct ListNode* current = head;

    while (l1 != NULL || l2 != NULL) {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        current->val = carry + x + y;

        // check for carry
        if (current->val < 10) {
            carry = 0;
        }
        else if (current->val == 10) {
            carry = 1;
            current->val = 0;
        }
        else {
            carry = 1;
            current->val = current->val % 10;
        }


        if (l1 != NULL) {
            l1 = l1->next;
        }

        if (l2 != NULL) {
            l2 = l2->next;
        }

        if (l1 != NULL || l2 != NULL) {
            current->next = (struct ListNode*)malloc(1 * sizeof(struct ListNode));
            current = current->next;
            current->next = NULL;
        }
        current->next = NULL;
    }

    /* if the loop ended, and there still
     * a carry we create a new node with value = carry
     */

    if (carry > 0) {
        current->next = (struct ListNode*)malloc(1 * sizeof(struct ListNode));
        current = current->next;
        current->val = carry;
        current->next = NULL;
    }

    return head;
}
