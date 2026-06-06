/*
Count Occurrences in Sorted Array

Given a sorted array and a target element x,
return the number of times x appears in the array.

Approach:
Find the first and last occurrence of x using binary search.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:

    int firstOccurrence(vector<int>& arr, int x) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                ans = mid;
                end = mid - 1;
            }
            else if (arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }

    int lastOccurrence(vector<int>& arr, int x) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                ans = mid;
                start = mid + 1;
            }
            else if (arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }

    int countOccurrences(vector<int>& arr, int x) {

        int first = firstOccurrence(arr, x);

        if (first == -1) {
            return 0;
        }

        int last = lastOccurrence(arr, x);

        return last - first + 1;
    }
};
