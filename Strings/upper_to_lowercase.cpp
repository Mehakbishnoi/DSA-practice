#include <iostream>
#include <string>
using namespace std;

/*
---------------------------------------------------------
PROBLEM:
Given a string, convert all uppercase letters to lowercase
and all lowercase letters to uppercase (toggle case).

Example:
Input  : Hello123
Output : hELLO123

---------------------------------------------------------
APPROACH:
- Traverse the string character by character.
- If the character is uppercase (A-Z), convert it to lowercase.
- If the character is lowercase (a-z), convert it to uppercase.
- Leave digits and special characters unchanged.

NOTE:
ASCII difference between uppercase and lowercase letters is 32.
So,
'A' + 32 = 'a'
'a' - 32 = 'A'

---------------------------------------------------------
TIME COMPLEXITY: O(n)
- We traverse the string once.

SPACE COMPLEXITY: O(1)
- No extra space used (in-place modification).

---------------------------------------------------------
*/

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        // Check if uppercase
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;   // convert to lowercase
        }
        // Check if lowercase
        else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;   // convert to uppercase
        }
    }

    cout << s;
    return 0;
}
