#include <iostream>
using namespace std;

/*
 Problem: First Negative in Every Window of size K
 Technique: Sliding Window
 Input: Array of integers, window size K
 Output: First negative integer in each window (-1 if none)

 Approach:
 1. Traverse each window of size K
 2. Find the first negative in that window
 3. Store in result array
 4. Print the result
 Time Complexity: O(n*K) (can be optimized to O(n) using deque)
*/

int main() {
    int a[5] = {-8, 2, 3, -6, 1};
    int n = sizeof(a)/sizeof(a[0]);
    int K;
    cin >> K;

    int res[n - K + 1] = {0};

    for(int i = 0; i <= n - K; i++) {
        int mn = -1; // Default if no negative
        for(int j = i; j < i + K; j++) {
            if(a[j] < 0) {
                mn = a[j];
                break;
            }
        }
        res[i] = mn;
    }

    for(int i = 0; i < n - K + 1; i++) {
        cout << res[i] << " ";
    }

    return 0;
}
