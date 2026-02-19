/*
Problem:
Find the maximum length of 0's and 1's in a binary array.

Approach:
- Traverse the array from index 1 to n-1
- Maintain a counter for current consecutive elements
- If current element equals previous, increment counter
- Otherwise reset counter to 1
- Keep updating the maximum length found

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;
int main() {
    int a[] = {0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);

    int maxlen = 1;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > maxlen) {
            maxlen = count;
        }
    }

    cout << "Maximum consecutive length: " << maxlen << endl;

    return 0;
}
