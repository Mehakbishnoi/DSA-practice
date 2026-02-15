/*
Problem: Rotate an array left by d positions

Brute-force approach (Inefficient):
    - Time Complexity: O(n*d)
    - Space Complexity: O(1)
    - Idea: 
        For each of d rotations:
            1. Store the first element
            2. Shift all other elements left by 1
            3. Place the first element at the end
    - Not recommended for large arrays

Optimized approach (Efficient):
    - Time Complexity: O(n)
    - Space Complexity: O(n)
    - Idea:
        1. Use a temporary array of size n
        2. Copy elements from index d to n to the start of temp array
        3. Copy first d elements to the end of temp array
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 8, 4, 5, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;  // Number of positions to rotate

    int brr[n];  // Temporary array to store rotated elements

    // Efficient O(n) approach
    for (int i = d; i < n; i++) {
        brr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        brr[n - d + i] = arr[i];
    }

    // Print rotated array
    cout << "Array after rotating left by " << d << " positions: ";
    for (int i = 0; i < n; i++) {
        cout << brr[i] << " ";
    }
    cout << endl;

    return 0;
}

/* 
// Brute-force O(n*d) approach (commented)
for(int i = 0; i < d; i++) {
    int first = arr[0];
    for(int j = 0; j < n-1; j++)
        arr[j] = arr[j+1];
    arr[n-1] = first;
}
*/
