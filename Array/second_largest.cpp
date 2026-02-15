/*
Problem: Find the second largest distinct element in an array
Approach: Single traversal
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {

    int arr[] = {-3, -4, -5, -6, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    cout << "Second largest element is: " << secondMax;
    return 0;
}
