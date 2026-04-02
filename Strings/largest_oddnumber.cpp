#include <iostream>
#include <string>
using namespace std;

/*
---------------------------------------------------
PROBLEM: Largest Odd Number in String
---------------------------------------------------
Given a string num representing a large integer,
return the largest-valued odd number (as a substring)
that is non-empty.

If no odd number exists, return "".
---------------------------------------------------
*/

/*
---------------------------------------------------
APPROACH:
---------------------------------------------------
Idea:
- A number is odd if its last digit is odd.
- We traverse from right to left.
- Find the first odd digit.
- Return substring from index 0 to that position.

Why?
Because we want the largest prefix that ends in an odd digit.

---------------------------------------------------
TIME COMPLEXITY:  O(n)
SPACE COMPLEXITY: O(1)
---------------------------------------------------
*/

class Solution {
public:
    string largestOddNumber(string num) {

        int n = num.size();

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {

            // Check if digit is odd
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }

        // No odd digit found
        return "";
    }
};

/*
---------------------------------------------------
DRIVER CODE (For testing)
---------------------------------------------------
*/
int main() {
    Solution obj;

    string num = "35420";

    cout << "Largest Odd Number: "
         << obj.largestOddNumber(num) << endl;

    return 0;
}
