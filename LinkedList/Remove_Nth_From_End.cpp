/*Remove Nth Node From End of List

**Approach:**
Use the two-pointer technique. Move `fast` pointer `n` steps ahead first. Then move both `slow` and `fast` together until `fast` reaches the last node. Now `slow->next` is the node that needs to be removed.

**Time Complexity:** `O(L)`
**Space Complexity:** `O(1)`

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* fast = head;
        ListNode* slow = head;

        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If fast becomes NULL, remove the head
        if(fast == NULL) {
            return head->next;
        }

        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* delnode = slow->next;
        slow->next = slow->next->next;
        delete delnode;

        return head;
    }
};

