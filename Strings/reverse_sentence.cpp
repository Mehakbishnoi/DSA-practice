#include <bits/stdc++.h>
using namespace std;

/*
    PROBLEM:
    Reverse the order of words in a given string.

    EXAMPLE:
    Input:  "Hello World from GPT"
    Output: "GPT from World Hello"

    APPROACH:
    1. Use stringstream to split the string into words.
    2. Store each word in a vector.
    3. Reverse the vector using STL reverse().
    4. Join the words back into a string.

    TIME COMPLEXITY: O(n)
    SPACE COMPLEXITY: O(n)
*/

string reverseWords(string s) {
    stringstream ss(s);     // used to split words
    vector<string> words;   // stores words
    string word;

    // Step 1 & 2: Extract words
    while (ss >> word) {
        words.push_back(word);
    }

    // Step 3: Reverse words
    reverse(words.begin(), words.end());

    // Step 4: Join words
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1)
            result += " ";
    }

    return result;
}

int main() {
    string s = "Hello World from GPT";
    cout << reverseWords(s);
    return 0;
}
