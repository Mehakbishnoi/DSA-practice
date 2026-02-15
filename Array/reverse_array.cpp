/*
Problem: Reverse an array
Approach: Two-pointer method
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    
    int a[] = {1, 2, 3, 4, 5, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    
    int start = 0, end = n - 1;
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

