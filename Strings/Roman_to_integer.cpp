# Roman to Integer

## Problem Statement

Roman numerals are represented by seven different symbols:
 Symbol | Value |
|----------|------:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |



Given a Roman numeral, convert it to an integer.

---

## Approach

1. Traverse the string from left to right.
2. Convert each Roman symbol to its integer value.
3. If the current value is smaller than the next value, subtract it.
4. Otherwise, add it.
5. Return the final result.

---

## C++ Code

```cpp
#include <iostream>
#include <string>
using namespace std;

int value(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return 0;
}

int romanToInt(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && value(s[i]) < value(s[i + 1]))
            result -= value(s[i]);
        else
            result += value(s[i]);
    }

    return result;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    cout << "Integer value: " << romanToInt(roman) << endl;

    return 0;
}
```



## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each character in the string is processed exactly once.

- **Space Complexity:** `O(1)`
  - Only a few variables are used, regardless of the input size.

---
