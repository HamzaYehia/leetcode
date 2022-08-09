/**
 * @problem name: Remove Nth Node From End of List
 * @problem link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jun-05
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    if (head == NULL) {
        return NULL;
    }

    struct ListNode* tempHead = head;
    int nodesCounter = 0;

    while (tempHead != NULL) {
        nodesCounter++;
        tempHead = tempHead->next;
    }

    nodesCounter -= n;
    tempHead = head;

    if (nodesCounter == 0) return head->next;

    while (--nodesCounter) {
        tempHead = tempHead->next;
    }

    tempHead->next = tempHead->next->next;
    return head;
}