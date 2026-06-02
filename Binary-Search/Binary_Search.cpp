class Solution {
public:
    int search(vector<int>& nums, int target) {

        /*
        Problem:
        Given a sorted array nums and a target value,
        return the index of target if found, otherwise return -1.

        Approach (Binary Search):
        1. Initialize start = 0 and end = n - 1.
        2. Find middle element.
        3. If nums[mid] == target, return mid.
        4. If nums[mid] < target, search in right half.
        5. Otherwise, search in left half.
        6. Continue until start > end.

        Time Complexity: O(log n)
        Space Complexity: O(1)
        */

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            // Target found
            if (nums[mid] == target) {
                return mid;
            }

            // Search in right half
            else if (nums[mid] < target) {
                start = mid + 1;
            }

            // Search in left half
            else {
                end = mid - 1;
            }
        }

        // Target not found
        return -1;
    }
};
