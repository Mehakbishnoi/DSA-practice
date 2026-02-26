#include <iostream>
using namespace std;

/*
 Problem: FLIP_BITS with K Window
 Goal: Flip 0s to 1s using a window of size K
 Input: Array of 0s and 1s, integer K
 Output: Minimum number of flips required or -1 if impossible

 Approach:
 1. Traverse the array from left to right.
 2. Whenever we encounter a 0 at index i, we need to flip the next K elements.
    - Flipping means: 0 becomes 1, 1 becomes 0
 3. Count every flip operation.
 4. After traversing, check if any 0 remains.
    - If yes, return -1 (impossible)
    - Otherwise, return the count of flips
 5. Time Complexity: O(n * K)
    Space Complexity: O(1)
*/

int main() {
    // Example array
    int arr[] = {0, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int K;  // Window size (capital K)
    cin >> K;  // Input window size
    int count = 0;  // Count of flips
    // Traverse array from left to right
    for (int i = 0; i <= n - K; i++) {
        if (arr[i] == 0) {
            // Flip next K elements
            for (int j = 0; j < K; j++) {
                arr[i + j] = 1 - arr[i + j]; // Flip 0<->1
            }
            count++; // Increment flips
        }
    }
    // Check if any 0 remains
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout << -1; // Impossible to flip all
            return 0;
        }
    }

    // Output total flips
    cout << count;
    return 0;
}
