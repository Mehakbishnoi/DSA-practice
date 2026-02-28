#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;

/*

Problem: Maximum Product of Two Different Elements

Given an array of integers, find the maximum product 
that can be obtained by multiplying two distinct elements.

Example:
Input:  arr = {4, 7, -7, 9, -10}
Output: Maximum product = 90 (9 * 10 OR -7 * -10)

Approach:
1. Find the maximum element (mx) and minimum element (mn) in the array.
2. Traverse the array again to find the second maximum (smx) and 
   second minimum (smn), excluding mx and mn.
3. Maximum product can come from either:
   - mx * smx  (two largest positive numbers)
   - mn * smn  (two smallest negative numbers)
4. Take the maximum of these two products.
5. Print the result.

Time Complexity:
- O(n) + O(n) = O(n)  → Two passes through the array

Space Complexity:
- O(1)  → Only 4 extra variables are used

Edge Cases:
- Array has less than 2 elements → cannot compute product
- Array has all negatives or mix of positive & negative → handled

*/

int main() {
    int arr[] = {4, 7, -7, 9, -10};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(n < 2){
        cout << "Not enough elements to compute product." << endl;
        return 0;
    }
    int mx = INT_MIN;   // maximum element
    int mn = INT_MAX;   // minimum element
    int smx = INT_MIN;  // second maximum
    int smn = INT_MAX;  // second minimum
    // Find maximum and minimum elements
    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    // Find second maximum and second minimum (excluding mx and mn)
    for(int i = 0; i < n; i++){
        if(arr[i] != mx){
            smx = max(smx, arr[i]);
        }
        if(arr[i] != mn){
            smn = min(smn, arr[i]);
        }
    }
    // Maximum product can be either:
    // 1) product of two largest numbers
    // 2) product of two smallest (negative) numbers
    int product1 = mx * smx;
    int product2 = mn * smn;

    cout << "Maximum product of two different elements: " 
         << max(product1, product2) << endl;

    return 0;
}
