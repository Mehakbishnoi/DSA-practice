#include<iostream>
#include<climits>
using namespace std;

/*
Problem:
Find the maximum product of any two elements in the array.

Approach:
1. The maximum product can come from:
   - Two largest positive numbers
   - OR two smallest (most negative) numbers

2. So we maintain:
   - max1, max2 → two largest numbers
   - min1, min2 → two smallest numbers

3. Traverse the array only once:
   - Update largest values
   - Update smallest values

4. Return:
   max(max1 * max2, min1 * min2)

Time Complexity:
O(n)  → Single traversal of array

Space Complexity:
O(1)  → Only 4 extra variables used
*/

int main() {

    int a[] = {3,2,5,6,4,-3,6,-9,-9,6};
    int n = sizeof(a) / sizeof(a[0]);

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i = 0; i < n; i++) {

        // Update two largest elements
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2) {
            max2 = a[i];
        }

        // Update two smallest elements
        if(a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i] < min2) {
            min2 = a[i];
        }
    }

    int result = max(max1 * max2, min1 * min2);

    cout << "Maximum Product = " << result;

    return 0;
}
