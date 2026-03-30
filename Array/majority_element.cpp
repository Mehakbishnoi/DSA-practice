#include <iostream>
using namespace std;

/*
Problem:
Given an array of size n, find the majority element.
The majority element appears more than n/2 times.

Approach (Boyer-Moore Voting Algorithm):
- Keep a candidate and a count.
- If count becomes 0, choose new candidate.
- If current element == candidate → count++
- Else → count--

Time Complexity: O(n)
Space Complexity: O(1)
*/

int majorityElement(int arr[], int n) {

    int candidate = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {

        // If count is 0, pick new candidate
        if(count == 0) {
            candidate = arr[i];
        }

        // Increase or decrease count
        if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main() {

    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Majority Element: " << majorityElement(arr, n);

    return 0;
}