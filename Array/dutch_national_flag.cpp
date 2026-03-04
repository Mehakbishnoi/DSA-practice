#include <iostream>
using namespace std;

// Function to sort array of 0s, 1s, and 2s
    // Approach: Use three pointers
    // low -> next position for 0
    // mid -> current element
    // high -> next position for 2

/*
Time Complexity: O(n)
    - We traverse the array only once using mid pointer.
    - Each element is moved at most once.

Space Complexity: O(1)
    - Sorting is done in-place.
    - No extra array or vector is used.
*/
void dutchNationalFlag(int arr[], int n) {


    int low = 0, mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            // Swap arr[low] and arr[mid] to move 0 to left
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        } else if (arr[mid] == 1) {
            // 1 is already in correct middle position
            mid++;
        } else { // arr[mid] == 2
            // Swap arr[mid] and arr[high] to move 2 to right
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    dutchNationalFlag(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

