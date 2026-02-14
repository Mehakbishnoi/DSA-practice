// Problem: Two Sum
// Language: C++
// Idea: Check every pair of elements
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    // Check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indexes: " << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "No two elements found" << endl;
    return 0;
}
