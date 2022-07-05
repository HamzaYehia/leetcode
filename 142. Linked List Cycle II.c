/**
 * @problem name: Linked List Cycle II
 * @problem link: https://leetcode.com/problems/linked-list-cycle-ii/
 *
 * @time complexity: O(n)
 * @space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-5
 */



struct ListNode* detectCycle(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return NULL;

    struct ListNode* slowRunner = head, * fastRunner = head;

    bool hasCycle = false;

    while (fastRunner && fastRunner->next) {
        slowRunner = slowRunner->next;
        fastRunner = fastRunner->next->next;

        if (fastRunner == slowRunner) {
            hasCycle = true;
            break;
        }
    }

    if (!hasCycle) return NULL;

    fastRunner = head;
    while (fastRunner != slowRunner) {
        slowRunner = slowRunner->next;
        fastRunner = fastRunner->next;
    }

    return slowRunner;
}