#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Check if Array is Sorted and Rotated

Approach:
1. Count how many times nums[i] > nums[i+1]
2. Also check last element with first element
3. If count <= 1 → true
   Else → false

Time Complexity: O(n)
Space Complexity: O(1)
*/

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int count = 0;

    // Check internal breaks
    for(int i = 0; i < n - 1; i++) {
        if(nums[i] > nums[i + 1]) {
            count++;
        }
    }

    // Check last with first
    if(nums[n - 1] > nums[0]) {
        count++;
    }

    if(count <= 1)
        cout << "True";
    else
        cout << "False";

    return 0;
}
