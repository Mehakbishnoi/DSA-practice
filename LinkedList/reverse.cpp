/*
LeetCode 206: Reverse Linked List

Problem Statement:
Given the head of a singly linked list, reverse the list and return the reversed list.

Example:
Input: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
Output: 5 -> 4 -> 3 -> 2 -> 1 -> NULL


Approach (Recursive):
1. Reach the last node using recursion.
2. The last node becomes the new head of the reversed list.
3. While returning from recursion, reverse the links:
   - Make the next node point to the current node.
   - Break the original link to avoid cycles.
4. Return the new head.


Time Complexity: O(n)
Space Complexity: O(n) (recursive call stack)
*/



class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        // Base case: empty list or single node
        if(head == NULL || head->next == NULL)
            return head;

        // Reverse the remaining linked list
        ListNode* newHead = reverseList(head->next);

        // Make the next node point to current node
        head->next->next = head;

        // Break the original connection
        head->next = NULL;

        return newHead;
    }
};