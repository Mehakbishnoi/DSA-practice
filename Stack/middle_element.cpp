#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*
Problem:
Reverse a given string using stack data structure.

Approach:
1. Push each character of the string into a stack.
2. Since stack follows LIFO (Last In First Out),
   popping characters gives them in reverse order.
3. Replace characters in the string while popping.

Time Complexity:
O(n) — where n is the length of the string

Space Complexity:
O(n) — extra stack used
*/

int main() {

    string str = "Mahak";
    stack<char> s;

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    for (int i = 0; i < str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
