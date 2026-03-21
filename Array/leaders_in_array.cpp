#include<iostream>
using namespace std;

/*
========================================================
📌 PROBLEM STATEMENT:
Given an array of integers, find all the leader elements.

👉 An element is called a leader if all the elements to 
its right are smaller than it.
👉 The last element is always a leader.

Example:
Input:  {4, 10, 6, 3, 5}
Output: 10 6 5
========================================================

💡 APPROACH (Optimized - O(n)):
1. Start from the rightmost element.
2. Assume last element as the current maximum (leader).
3. Traverse the array from right to left.
4. If current element > maxleader:
      → It is a leader
      → Update maxleader
5. Print leaders while traversing.

========================================================

⏱️ COMPLEXITY:
Time Complexity: O(n)
→ Single traversal

Space Complexity: O(1)
→ No extra space used

(Note: Output will be in reverse order)
========================================================
*/

int main(){
    int a[] = {4,10,6,3,5};
    int n = sizeof(a)/sizeof(a[0]);

    int maxleader = a[n-1];

    cout << "Leader elements: ";
    cout << maxleader << " ";   // last element is always leader

    for(int i = n-2; i >= 0; i--){
        if(a[i] > maxleader){
            maxleader = a[i];
            cout << maxleader << " ";
        }
    }

    return 0;
}