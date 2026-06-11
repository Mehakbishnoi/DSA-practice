/*
    Problem: Isomorphic Strings

    Given two strings s and t, determine if they are isomorphic.

    Two strings are isomorphic if the characters in s can be replaced to get t.

    Rules:
    1. Every character must map to exactly one character.
    2. No two different characters can map to the same character.
    3. A character may map to itself.

    Examples:
    Input:  s = "egg", t = "add"
    Output: true

    Input:  s = "foo", t = "bar"
    Output: false

    Input:  s = "paper", t = "title"
    Output: true

    Approach:
    - Use two arrays of size 256 to store the last seen positions
      of characters from both strings.
    - If the stored positions do not match at any index,
      the strings are not isomorphic.
    - Store (i + 1) instead of i because arrays are initialized
      with 0, which represents "not seen yet".

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        int mapS[256] = {0};
        int mapT[256] = {0};

        for (int i = 0; i < s.size(); i++) {

            if (mapS[s[i]] != mapT[t[i]]) {
                return false;
            }

            mapS[s[i]] = i + 1;
            mapT[t[i]] = i + 1;
        }

        return true;
    }
};
