#include <iostream>
using namespace std;

/*
Problem:
Given an array containing only 2s, 3s, and 4s, sort it in order.

Approach (Counting Method):
1. Initialize three counters: cnt2, cnt3, cnt4 to 0.
2. Traverse the array once and count how many 2s, 3s, and 4s are present.
3. Overwrite the array:
   - First cnt2 elements = 2
   - Next cnt3 elements = 3
   - Remaining cnt4 elements = 4
4. Print the sorted array.

Time Complexity: O(n)
  - First pass to count elements: O(n)
  - Second pass to overwrite array: O(n)
  - Total = O(n)

Space Complexity: O(1)
  - Only 3 extra integer variables used, no extra array.

*/

int main() {
    int arr[] = {2,3,3,2,4,3,2,4,2,4,3,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Step 1: Initialize counts
    int cnt2 = 0, cnt3 = 0, cnt4 = 0;

    // Step 2: Count 2s, 3s, 4s
    for(int i = 0; i < n; i++) {
        if(arr[i] == 2) cnt2++;
        else if(arr[i] == 3) cnt3++;
        else if(arr[i] == 4) cnt4++;
    }

    // Step 3: Overwrite array with sorted values
    for(int i = 0; i < cnt2; i++) arr[i] = 2;
    for(int i = cnt2; i < cnt2 + cnt3; i++) arr[i] = 3;
    for(int i = cnt2 + cnt3; i < n; i++) arr[i] = 4;

    // Step 4: Print sorted array
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}