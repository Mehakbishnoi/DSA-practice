#include <bits/stdc++.h>
using namespace std;

// Find first non-repeating character in a string
// If all characters repeat, return '#'

char firstNonRepeating(string s) {
    unordered_map<char, int> mp;

    // count frequency
    for (char ch : s) {
        mp[ch]++;
    }

    // check in same order
    for (char ch : s) {
        if (mp[ch] == 1) {
            return ch;
        }
    }

    return '#';
}

int main() {
    string s = "swiss";

    char res = firstNonRepeating(s);

    if (res == '#')
        cout << "No non-repeating character";
    else
        cout << res;

    return 0;
}
