# Pascal's Triangle

## Problem Statement
Given an integer `numRows`, return the first `numRows` rows of Pascal's Triangle.

## Code

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int row = 0; row < numRows; row++) {
            vector<int> temp;
            long long val = 1;

            temp.push_back(1);

            for(int col = 1; col <= row; col++) {
                val = val * (row - col + 1);
                val = val / col;
                temp.push_back(val);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
```
## Complexity
- Time Complexity: **O(n²)**
- Space Complexity: **O(n²)**
