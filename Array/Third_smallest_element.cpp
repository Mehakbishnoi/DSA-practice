#include <iostream>
#include <climits>  // For INT_MAX
using namespace std;

/*
---------------------------------------------------------
Problem: Find Third Smallest Element in Array
---------------------------------------------------------
Given an array of integers, find the third smallest 
distinct element in the array.

Example:
Input:  arr = {-19, 16, 8, 3, 2}
Output: Third smallest element is: 2
---------------------------------------------------------

Approach:
1. Initialize three variables: first, second, third = INT_MAX
2. Traverse the array first time to find the smallest element.
3. Traverse the array second time to find the second smallest 
   element (ignore elements equal to first).
4. Traverse the array third time to find the third smallest 
   element (ignore elements equal to first or second).
5. Check if third smallest exists; if yes, print it; else notify 
   user that it does not exist.

Why it works:
- Each pass finds the next smallest distinct element.
- INT_MAX ensures uninitialized comparison is valid.

Time Complexity:
- O(n) per pass, total 3 passes → O(n)

Space Complexity:
- O(1) extra space, only three variables used.

Edge Cases:
- Less than 3 distinct elements → no third smallest element.
- Array with duplicates → only distinct elements counted.
---------------------------------------------------------
*/

int main() {

    int arr[] = {-19, 16, 8, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int first = INT_MAX;
    int second = INT_MAX;
    int third = INT_MAX;

    // Find smallest element
    for(int i = 0; i < n; i++){
        first = min(first, arr[i]);
    }

    // Find second smallest element
    for(int i = 0; i < n; i++){
        if(arr[i] != first){
            second = min(second, arr[i]);
        }
    }

    // Find third smallest element
    for(int i = 0; i < n; i++){
        if(arr[i] != first && arr[i] != second){
            third = min(third, arr[i]);
        }
    }

    // Print result
    if(third == INT_MAX){
        cout << "No third smallest element exists." << endl;
    } else {
        cout << "Third smallest element is: " << third << endl;
    }

    return 0;
}
