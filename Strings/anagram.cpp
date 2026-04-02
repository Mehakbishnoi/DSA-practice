#include <iostream>
#include <string>
using namespace std;

/*
---------------------------------------------------
PROBLEM: Valid Anagram
---------------------------------------------------
Given two strings s and t, return true if t is an
anagram of s, and false otherwise.

An anagram means both strings contain the same
characters with the same frequency.
---------------------------------------------------
*/

/*
---------------------------------------------------
APPROACH 1: Frequency Array (Optimized)
---------------------------------------------------
Idea:
- If lengths differ → not anagram
- Use a fixed array of size 26 (only lowercase letters)
- Increase count for string s
- Decrease count for string t
- If all values become 0 → anagram

---------------------------------------------------
TIME COMPLEXITY:  O(n)
SPACE COMPLEXITY: O(1)  (constant 26 size array)
---------------------------------------------------
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        // Step 1: Check length
        if (s.size() != t.size()) return false;

        // Step 2: Frequency array
        int freq[26] = {0};

        // Step 3: Count characters
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // Step 4: Check all frequencies
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        }

        return true;
    }
};

/*
---------------------------------------------------
DRIVER CODE (For testing)
---------------------------------------------------
*/
int main() {
    Solution obj;

    string s = "listen";
    string t = "silent";

    cout << (obj.isAnagram(s, t) ? "True (Anagram)" : "False (Not Anagram)") << endl;

    return 0;
}
