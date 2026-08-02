/*
LeetCode 141: Linked List Cycle

Problem:
Given head of a linked list, determine if the linked list has a cycle.

Approach:
Floyd's Cycle Detection Algorithm (Slow & Fast Pointer)

Time Complexity: O(n)
Space Complexity: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;          // Move one step
            fast = fast->next->next;    // Move two steps

            if (slow == fast) {
                return true;            // Cycle found
            }
        }

        return false;                   // No cycle
    }
};