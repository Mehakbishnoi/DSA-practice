/*
Problem: Reverse the first K elements of a queue

Approach:
1. Use a stack to reverse the first K elements.
2. Pop the first K elements from the queue and push them into a stack.
3. Pop elements from the stack back into the queue (reverses first K elements).
4. Move the remaining (n-K) elements to the back of the queue to maintain original order.

Time Complexity: O(n)
Space Complexity: O(k)  // stack stores k elements
*/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Sample input
    q.push(3);
    q.push(7);
    q.push(6);
    q.push(8);
    q.push(9);

    int k = 3;
    int n = q.size();
    stack<int> st;

    // Step 1: Push first k elements to stack
    for (int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Pop stack back into queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // Step 3: Move remaining elements to back
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }

    // Step 4: Print the queue
    cout << "Queue after reversing first " << k << " elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
