/*
-----------------------------------------------
Problem: Single Number
-----------------------------------------------

Given an array where every element appears twice 
except for one, find that single one.

-----------------------------------------------
Approach (Using XOR):
-----------------------------------------------
1. Initialize result = 0
2. Traverse the array using a loop
3. XOR every element with result

   Properties of XOR:
   - a ^ a = 0  (same numbers cancel out)
   - a ^ 0 = a

4. All duplicate elements cancel each other
5. The remaining value is the single number

-----------------------------------------------
Time Complexity:
O(n)  -> traverse array once

Space Complexity:
O(1)  -> no extra space used
-----------------------------------------------
*/

#include <iostream>
using namespace std;

int singleNumber(int arr[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}

// Example usage
int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Single Number: " << singleNumber(arr, n);

    return 0;
}
