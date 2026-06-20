/*
🔄 Problem: Rotate String

Given two strings s and goal, return true if and only if s can become goal after some number of shifts.

A shift means:
- take the leftmost character and move it to the rightmost position.


*/

/*
💡 Approach (User Logic):
- Repeatedly rotate the string one step at a time
- After each rotation, check if it equals goal
- Do this at most n times (length of string)
*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        int n = s.size();

        for (int step = 0; step < n; step++) {

            // if matched at any step
            if (s == goal) return true;

            // 🔁 perform ONE left rotation (your logic fixed safely)
            char first = s[0];

            for (int i = 0; i < n - 1; i++) {
                s[i] = s[i + 1];
            }

            s[n - 1] = first;
        }

        return s == goal;
    }
};

/*
⏱ Complexity Analysis:

Time Complexity: O(n^2)
- At most n rotations
- Each rotation takes O(n)

Space Complexity: O(1)
- No extra data structure used
*/
