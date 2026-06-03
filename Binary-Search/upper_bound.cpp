/*
Problem:
Given a sorted array and a value x, return the first index
whose value is > x.

If no such element exists, return n.


Idea:
Whenever I find an element > x, it can be a possible answer.
But there might be another valid index on the left side,
so I store it and continue searching left.

If arr[mid] <= x, then the answer must lie on the right side.

Time  : O(log n)
Space : O(1)
*/

class Solution {
public:
    int upperBound(vector<int>& arr, int x) {
        int low = 0;
        int high = arr.size() - 1;

        int ans = arr.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
