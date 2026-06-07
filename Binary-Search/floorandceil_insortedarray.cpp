/*
Problem Statement:
Given a sorted array and a target value x, find the Floor and Ceil of x.

Floor:
The greatest element in the array that is less than or equal to x.

Ceil:
The smallest element in the array that is greater than or equal to x.

If Floor or Ceil does not exist, return -1.

Example:
Input:
arr = {1, 2, 4, 6, 10}
x = 5

Output:
Floor = 4
Ceil = 6

Approach:
Use Binary Search:
- If arr[mid] <= x, it can be a potential floor.
- If arr[mid] >= x, it can be a potential ceil.
- Continue searching to find the closest valid values.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int floorVal = -1, ceilVal = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return {arr[mid], arr[mid]};
        }

        if (arr[mid] < x) {
            floorVal = arr[mid];
            low = mid + 1;
        } else {
            ceilVal = arr[mid];
            high = mid - 1;
        }
    }

    return {floorVal, ceilVal};
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 10};
    int x = 5;

    pair<int, int> ans = getFloorAndCeil(arr, x);

    cout << "Floor: " << ans.first << endl;
    cout << "Ceil: " << ans.second << endl;

    return 0;
}
