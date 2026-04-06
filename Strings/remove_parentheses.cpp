/*
Problem: Remove Outermost Parentheses

Given a valid parentheses string s, break it into primitive parts
and remove the outermost bracket of each part.

Example:
Input: "(()())(())"
Output: "()()()"
*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                if (depth > 0) ans += c;  // skip first '('
                depth++;
            } else {
                depth--;
                if (depth > 0) ans += c;  // skip last ')'
            }
        }

        return ans;
    }
};

/*
Approach:
Use a counter (depth) to track nesting.
Don't include the first '(' and last ')' of each valid block.

Time: O(n)
Space: O(n)
*/
