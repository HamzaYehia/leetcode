/**
 * @problem name: Intersection of Two Linked Lists
 * @problem link: https://leetcode.com/problems/intersection-of-two-linked-lists/
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Oct-06
 */


struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {

    struct ListNode* a = headA;
    struct ListNode* b = headB;

    while (a != b) {
        a = (a == NULL) ? headB : a->next;
        b = (b == NULL) ? headA : b->next;
    }

    return a;
}
