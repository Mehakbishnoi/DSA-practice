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
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // slow moves one step and fast moves two steps
        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            // cycle is found
            if(slow == fast) {

                // move slow back to head
                slow = head;

                // both move one step
                // they meet at the starting point of cycle
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        // no cycle
        return NULL;
    }
};