/*
Problem: Reverse a Queue using extra space

Approach:
1. Use a stack as auxiliary data structure.
2. Push all elements of the queue into the stack.
3. Pop elements from the stack and push them back into the queue.
4. The queue will now be reversed.

Time Complexity: O(n)  // Each element is pushed and popped once from stack and queue
Space Complexity: O(n) // Stack stores all n elements of the queue
*/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> st;

    // Step 1: Move all elements from queue to stack
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Move elements back from stack to queue (reversed order)
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}

int main() {
    queue<int> q;

    // Sample input
    q.push(20);
    q.push(50);
    q.push(40);
    q.push(70);
    q.push(80);

    cout << "Original Queue: ";
    queue<int> temp = q; // temporary copy to print
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Reverse the queue
    reverseQueue(q);

    cout << "Reversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
