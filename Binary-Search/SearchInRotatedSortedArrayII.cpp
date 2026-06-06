/*
Search in Rotated Sorted Array II

Given a rotated sorted array that may contain duplicates,
return true if the target exists in the array, otherwise false.

Time Complexity:
Average: O(log n)
Worst: O(n)

Space Complexity:
O(1)
*/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return true;
            }

            // Unable to decide the sorted half due to duplicates
            if (nums[start] == nums[mid] &&
                nums[mid] == nums[end]) {
                start++;
                end--;
                continue;
            }

            // Left half is sorted
            if (nums[start] <= nums[mid]) {

                if (nums[start] <= target &&
                    target < nums[mid]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }

            // Right half is sorted
            else {

                if (nums[mid] < target &&
                    target <= nums[end]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }

        return false;
    }
};
