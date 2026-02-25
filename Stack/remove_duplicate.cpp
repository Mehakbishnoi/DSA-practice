#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
Problem:
Remove all adjacent duplicate characters from a string.

Example:
Input  : azxxzy
Output : ay

Approach:
1. Traverse the string character by character.
2. If the stack is not empty and top element matches current character,
   pop the top element (remove duplicate).
3. Otherwise, push current character onto stack.
4. Build the result string by popping stack elements.

Time Complexity:
O(n)

Space Complexity:
O(n)
*/

int main() {

    string s = "azxxzy";
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        if (!st.empty() && st.top() == s[i]) {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }

    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }

    cout << res;
    return 0;
}
