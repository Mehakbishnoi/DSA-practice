#include <iostream>
#include <string>
using namespace std;

/*
Problem: Reverse a string in-place using two-pointer approach.

Approach:
1. Initialize two pointers: start = 0, end = s.size() - 1
2. Swap characters at start and end positions.
3. Move start forward and end backward.
4. Repeat until start > end.

Example:
Input: "Bobby"
Start = 0, End = 4
Swaps:
B <-> y => yobbB
o <-> b => ybboB
Middle reached, stop.
Output: "ybboB"

Time Complexity: O(n), where n is the length of the string.
Space Complexity: O(1), in-place reversal, no extra string used.
*/

int main() {
    string s = "Bobby";
    int start = 0;
    int end = s.size() - 1;

    while (start <= end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed string: " << s << endl;
    return 0;
}
