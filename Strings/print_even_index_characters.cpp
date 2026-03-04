#include <iostream>
#include <string>
using namespace std;

/*
Problem: Print all characters of a string at even indices.

Approach:
1. Take the input string 's'.
2. Loop through each character using its index 'i'.
3. If the index 'i' is even (i % 2 == 0), print s[i].
4. Repeat until the end of the string.

Example:
Input: "hello"
Indices: 0 1 2 3 4
Characters: h e l l o
Even indices characters: h, l, o
Output: hlo

Time Complexity: O(n), where n is the length of the string (each character is visited once)
Space Complexity: O(1), only a few variables used, no extra data structures needed
*/

void printEvenIndices(const string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            cout << s[i];
        }
    }
    cout << endl;
}

int main() {
    string s = "hello";
    cout << "Even-indexed characters: ";
    printEvenIndices(s);
    return 0;
}