#include <iostream>
using namespace std;

/*
Problem:
Given an array of non-negative integers representing a number,
add 1 to the number and print the updated array.
Note: Size of the array does not change.

Approach:
1. Start from the last index (least significant digit).
2. If current digit < 9, increment it by 1 and break.
3. If current digit == 9, set it to 0 and continue (carry over).
4. Print the array after processing.
Note: Since array size is fixed, carry beyond most significant digit is ignored.

Time Complexity: O(n) 
  - We traverse the array at most once from end to start.
Space Complexity: O(1)
  - No extra space used, modifications done in-place.
*/

int main() {
    int a[] = {2, 9, 9};   // Input number as array
    int n = sizeof(a) / sizeof(a[0]);

    // Add 1 to the number
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] < 9) {
            a[i] += 1;   // Increment digit
            break;       // Done, no carry
        }
        else {
            a[i] = 0;    // Carry over
        }
    }

    // Print the updated array
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}