// Program: Find Largest Element in Array
// Language: C++
// Idea: Compare each element with current maximum
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; // fixed-size array for beginners

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0]; // assume first element is largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // update max if current element is larger
        }
    }

    cout << "Largest element is: " << max << endl;
    return 0;
}
