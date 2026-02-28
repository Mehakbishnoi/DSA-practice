#include<iostream>
using namespace std;

/*
---------------------------------------------------------
Problem: Reverse Array in Groups of K
---------------------------------------------------------
Given an array of integers and an integer k, reverse the
array elements in groups of size k.

Example:
Input:
arr = {3, 5, 1, 4, 7, 8, 9}
k = 3

Output:
1 5 3 8 7 4 9
---------------------------------------------------------

Approach:
1. Traverse the array in steps of k.
2. For each group:
   - Set low = starting index of group
   - Set high = min(i + k - 1, n - 1)
3. Reverse the elements between low and high using
   the two-pointer technique.
4. Repeat until all groups are processed.

Why it works:
- Each element is reversed exactly once in its group.
- No extra array is used (in-place reversal).

Time Complexity:
- O(n)
  Each element is visited at most once.

Space Complexity:
- O(1)
  Only constant extra variables are used.

Edge Cases:
- k = 1 → Array remains unchanged.
- k >= n → Entire array is reversed.
- n % k != 0 → Last group with fewer elements is also reversed.
---------------------------------------------------------
*/

int main() {

    int arr[] = {3, 5, 1, 4, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter value of k: ";
    cin >> k;
    // Traverse array in groups of size k
    for(int i = 0; i < n; i += k) {
        int low = i;
        int high = (i + k - 1 < n) ? (i + k - 1) : n - 1;
        // Reverse current group
        while(low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    // Print final array
    cout << "Array after reversing in groups: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
