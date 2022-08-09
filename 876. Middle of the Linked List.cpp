/**
 * @problem name: Middle of the Linked List
 * @problem link: https://leetcode.com/problems/middle-of-the-linked-list/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-06
 */


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr) return nullptr;

        ListNode* slowRunner = head, * fastRunner = head;

        while (fastRunner != nullptr && fastRunner->next != nullptr) {
            slowRunner = slowRunner->next;
            fastRunner = fastRunner->next->next;
        }

        return slowRunner;
    }
};