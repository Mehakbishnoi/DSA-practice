#include <bits/stdc++.h>
using namespace std;

/*
========================================================
Problem: Sum of Beauty of All Substrings

Problem Statement:
------------------
The beauty of a string is defined as the difference between:
- the frequency of the most frequent character, and
- the frequency of the least frequent character (excluding 0 frequency characters).

For a given string s, return the sum of beauty of all its substrings.

Example:
Input:  s = "aabcb"
Output: 5

Input:  s = "aabcbaa"
Output: 17

========================================================
Approach:
---------
- Generate all substrings using two loops.
- Maintain frequency array for characters.
- For each substring:
    - find max frequency
    - find min frequency (ignoring 0)
    - add (max - min) to answer

========================================================
Complexity Analysis:
--------------------
Time Complexity:  O(n^2 * 26)
Space Complexity: O(26) -> constant space

========================================================
*/

class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int totalBeauty = 0;

        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);

            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int mx = 0;
                int mn = INT_MAX;

                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        mx = max(mx, freq[k]);
                        mn = min(mn, freq[k]);
                    }
                }

                totalBeauty += (mx - mn);
            }
        }

        return totalBeauty;
    }
};



int main() {
    Solution obj;

    string s = "aabcb";
    cout << obj.beautySum(s) << endl;

    return 0;
}
