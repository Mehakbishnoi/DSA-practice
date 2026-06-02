class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // Approach:
        // Apply Binary Search to find the target.
        // If target is present, return its index.
        // If not present, return the position where it
        // should be inserted to maintain sorted order.

        // Time Complexity: O(log n)
        // Space Complexity: O(1)

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return start;
    }
};
