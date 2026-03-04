#include <iostream>
#include <string>
using namespace std;

/*
Problem: Check whether a string is a palindrome.

Approach:
1. Store the original string in 's'.
2. Create an empty string 's1' to store the reversed string.
3. Traverse the original string from end to start.
4. Append each character to 's1'.
5. Compare 's1' with original string 's'.
   - If equal → Palindrome
   - Else → Not a palindrome

Example:
Input: "madam"
Reversed: "madam"
Since both are equal → Palindrome

Time Complexity: O(n)  (We traverse the string once)
Space Complexity: O(n) (Extra string used to store reversed version)
*/

int main() {
    string s = "madam";
    int n = s.size();
    string s1 = "";   // Empty string

    // Reverse the string
    for (int i = n - 1; i >= 0; i--) {
        s1 += s[i];   // Append character
    }

    // Check palindrome
    if (s1 == s) {
        cout << "It is a palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    cout << "Reversed string: " << s1 << endl;

    return 0;
}
