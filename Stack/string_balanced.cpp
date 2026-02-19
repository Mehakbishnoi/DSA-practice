
/*
Problem:
Check if a string containing parentheses (), [], {} is balanced.

Approach:
- Use a stack to track opening brackets
- For each character:
    - If it's an opening bracket, push onto stack
    - If it's a closing bracket, check if top of stack matches
      - If yes, pop the top
      - If no or stack empty, return false
- After traversing, if stack is empty -> balanced, else not balanced

Time Complexity: O(n) -> each character is pushed/popped at most once
Space Complexity: O(n) -> stack stores opening brackets
*/

#include <iostream>
#include <stack>
using namespace std;


bool isValid(string s) {
    stack<char> st;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        char ch = s[i];

        // If opening bracket, push
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }
        // If closing bracket, check top of stack
        else if ((!st.empty() && ch == ')') && (st.top() == '(')) {
            st.pop();
        }
        else if ((!st.empty() && ch == ']') && (st.top() == '[')) {
            st.pop();
        }
        else if ((!st.empty() && ch == '}') && (st.top() == '{')) {
            st.pop();
        }
        else {
            return false;
        }
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Enter string with brackets: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not balanced" << endl;
    }

    return 0;
}
