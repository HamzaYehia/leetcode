/**
 * @problem name: Palindrome Linked List
 * @problem link: https://leetcode.com/problems/palindrome-linked-list/
 *
 * @solution time complexity: O(n)
 * @solution space complexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-2
 */



struct ListNode* findEndOfFirstHalf(struct ListNode* head) {
    struct ListNode* slowRunner = head;
    struct ListNode* fastRunner = head;

    while (fastRunner->next != NULL && fastRunner->next->next != NULL) {
        slowRunner = slowRunner->next;
        fastRunner = fastRunner->next->next;
    }
    return slowRunner;
}


struct ListNode* reverse(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* prev = NULL, * current = head, * following = NULL;

    while (current != NULL) {
        following = current->next;

        current->next = prev;

        prev = current;
        current = following;
    }

    head = prev;
    return head;
}


bool isPalindrome(struct ListNode* head) {

    struct ListNode* firstHalfStart = head;
    struct ListNode* secondHalfStart = findEndOfFirstHalf(head);

    secondHalfStart = reverse(secondHalfStart->next);

    while (secondHalfStart != NULL) {
        if (firstHalfStart->val != secondHalfStart->val) return false;

        firstHalfStart = firstHalfStart->next;
        secondHalfStart = secondHalfStart->next;
    }
    return true;
}
