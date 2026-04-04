#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else {
            // If stack empty → invalid
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            // Check matching
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // Stack should be empty
    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s)) cout << "true\n";
    else cout << "false\n";

    return 0;
}
