# Odd Even Linked List

## Problem

Given the head of a singly linked list, group all the nodes at odd positions together followed by the nodes at even positions.

The relative order of the nodes in both groups should remain the same.


## Approach

* Keep one pointer `odd` for odd-position nodes.
* Keep one pointer `even` for even-position nodes.
* Store the first even node in `evennode` so we can attach the even list at the end.
* Move `odd` and `even` forward while rearranging their `next` pointers.
* Finally, connect the last odd node to the first even node.

## Code



class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evennode = head->next;

        while (even != NULL && even->next != NULL) {

            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }

        odd->next = evennode;

        return head;
    }
};
```

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`
