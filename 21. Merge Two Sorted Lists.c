/**
 * @problem name: 21. Merge Two Sorted Lists
 * @problem link: https://leetcode.com/problems/merge-two-sorted-lists/
 *
 * @solution time complexity: O(n + m)  where n = list1, and m = list2
 * @solution status: accepted
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Apr-25
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    struct ListNode* head = NULL;
    struct ListNode* current = NULL;

    // choosing the head
    if (list1->val <= list2->val) {
        head = list1;
        list1 = list1->next;
    }
    else {
        head = list2;
        list2 = list2->next;
    }

    current = head;

    // merging the two lists
    while (list1 != NULL && list2 != NULL) {

        if (list1->val <= list2->val) {
            current->next = list1;
            current = current->next;
            list1 = list1->next;
        }
        else {
            current->next = list2;
            current = current->next;
            list2 = list2->next;
        }
    }


    // find remaining elements
    if (list1 == NULL) {
        current->next = list2;
    }
    else {
        current->next = list1;
    }

    return head;
}