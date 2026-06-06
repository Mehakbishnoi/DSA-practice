/*
Find Minimum in Rotated Sorted Array

A sorted array is rotated at some pivot.
Return the minimum element in the array.

Example:
Input: [3,4,5,1,2]
Output: 1

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findMin(vector<int>& nums) {

        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {

            int mid = start + (end - start) / 2;

            // Minimum lies in the right half
            if (nums[mid] > nums[end]) {
                start = mid + 1;
            }
            // Minimum lies in the left half (including mid)
            else {
                end = mid;
            }
        }

        return nums[start];
    }
};
