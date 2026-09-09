
/*
Problem:
Delete the middle node of a singly linked list.

Approach:
Use slow and fast pointers.
- slow moves one step
- fast moves two steps
- When fast reaches the end, slow will be at the middle node.
- Then find the node before slow and remove slow.

Example:
1 -> 2 -> 3 -> 4 -> 5

Middle node = 3

After deletion:
1 -> 2 -> 4 -> 5

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* temp = head;

        while(temp->next != slow) {
            temp = temp->next;
        }

        temp->next = slow->next;
        delete slow;

        return head;
    }
};

