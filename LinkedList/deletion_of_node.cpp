/*
🗑️ Problem: Delete Node in a Linked List

Problem Statement:
Given a node in a singly linked list, delete the node.
You are NOT given the head of the linked list.

It is guaranteed that:
- The given node is not the last node in the linked list.
- All values in the linked list are unique.

/*
💡 Approach:
1. Copy the value of the next node into the current node.
2. Store the next node in a temporary pointer.
3. Update the current node's next pointer to skip the next node.
4. Delete the skipped node.

This effectively removes the given node from the linked list.
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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;

        ListNode* temp = node->next;
        node->next = node->next->next;

        delete temp;
    }
};

/*
⏱ Complexity Analysis

Time Complexity: O(1)
- Only a constant number of operations are performed.

Space Complexity: O(1)
- No extra data structure is used.
*/
