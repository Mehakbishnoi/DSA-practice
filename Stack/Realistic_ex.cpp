
/*
Problem:
Simulate browser history using stack operations.

Approach:
- Each opened webpage is pushed onto the stack
- The top of the stack represents the current page
- When a page is closed, pop the top element
- Stack follows LIFO (Last In First Out)

Time Complexity:
- push(), pop(), top() -> O(1)

Space Complexity:
- O(n) where n is number of opened pages
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    stack<string> browser_history;

    browser_history.push("www.google.com");
    browser_history.push("www.instagram.com");
    browser_history.push("www.pw.com");

    cout << "No. of opened pages: " << browser_history.size() << endl;
    cout << "Current page: " << browser_history.top() << endl;

    // Closing current page
    browser_history.pop();

    cout << "After closing current page:" << endl;
    cout << "No. of opened pages: " << browser_history.size() << endl;
    cout << "Current page: " << browser_history.top() << endl;

    return 0;
}
