/**
 * @problem name: Linked List Cycle
 * @problem link: https://leetcode.com/problems/linked-list-cycle/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-5
 */



bool hasCycle(struct ListNode* head) {
    struct ListNode* slowRunner = head, * fastRunner = head;

    while (fastRunner && fastRunner->next) {
        slowRunner = slowRunner->next;
        fastRunner = fastRunner->next->next;

        if (fastRunner == slowRunner) return true;
    }
    return false;
}