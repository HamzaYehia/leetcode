/**
 * @problem name: 19. Remove Nth Node From End of List
 * @problem link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 *
 * @solution time complexity: O(2n)
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jun-05
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    if (head == NULL) {
        return NULL;
    }

    struct ListNode* head_reversed = NULL;

    struct ListNode* temp1 = head;

    while (temp1 != NULL) {
        struct ListNode* new_node = (struct ListNode*)malloc(1 * sizeof(struct ListNode));
        new_node->val = temp1->val;
        new_node->next = head_reversed;

        head_reversed = new_node;

        temp1 = temp1->next;
    }


    struct ListNode* final_head = NULL;

    struct ListNode* temp2 = head_reversed;

    int position = 1;
    while (temp2 != NULL) {
        if (position == n) {
            temp2 = temp2->next;
            position++;
            continue;
        }

        struct ListNode* new_node = (struct ListNode*)malloc(1 * sizeof(struct ListNode));
        new_node->val = temp2->val;
        new_node->next = final_head;

        final_head = new_node;

        temp2 = temp2->next;
        position++;
    }

    return final_head;
}