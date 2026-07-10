/*
Problem Statement:
Given a string s, sort the characters in decreasing order based on their frequency
and return the resulting string.

Example:
Input:  s = "tree"
Output: "eert"

Approach:
1. Create a frequency array of size 128 to count occurrences of each ASCII character.
2. Repeatedly find the character with the highest remaining frequency.
3. Add that character to the answer string as many times as its frequency.
4. Set its frequency to 0 so it is not selected again.
5. Continue until all characters are added to the answer.

Time Complexity: O(128 * n) ≈ O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    string frequencySort(string s) {
        int freq[128] = {0};

        // Count frequency of each character
        for(char ch : s) {
            freq[ch]++;
        }

        string ans = "";

        // Build answer by repeatedly taking
        // the character with maximum frequency
        while(ans.size() < s.size()) {
            int mx = 0;
            char ch;

            for(int i = 0; i < 128; i++) {
                if(freq[i] > mx) {
                    mx = freq[i];
                    ch = i;
                }
            }

            for(int i = 0; i < mx; i++) {
                ans += ch;
            }

            freq[ch] = 0;
        }

        return ans;
    }
};