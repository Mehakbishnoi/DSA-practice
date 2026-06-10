/*
Problem: Longest Common Prefix

Problem Statement:
Write a function to find the longest common prefix string among an array of strings.
If there is no common prefix, return an empty string "".

Example:
Input:  ["flower", "flow", "flight"]
Output: "fl"

Approach:
1. Use the first string as a reference.
2. Traverse each character of the first string.
3. For every character position, check whether all other strings:
   - Have a character at that position.
   - Contain the same character.
4. If a mismatch is found, return the prefix formed so far.
5. If all characters match, the entire first string is the common prefix.

Time Complexity: O(N * M)
- N = number of strings
- M = length of the shortest string

Space Complexity: O(M)
- For storing the resulting prefix.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = "";

        for (int i = 0; i < strs[0].size(); i++) {
            char currentChar = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != currentChar) {
                    return prefix;
                }
            }

            prefix += currentChar;
        }

        return prefix;
    }
};
