/*
Problem:
Given a rotated sorted array nums and a target value,
return its index if found, otherwise return -1.

Idea:
In every iteration, at least one half of the array
is sorted.

1. Check whether the left half is sorted.
2. If the target lies inside that sorted half,
   search there.
3. Otherwise search in the other half.
4. Repeat until the target is found or the search
   space becomes empty.

Time  : O(log n)
Space : O(1)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;

            // Left half is sorted
            if (nums[start] <= nums[mid]) {
                if (target >= nums[start] &&
                    target < nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }

            // Right half is sorted
            else {
                if (target > nums[mid] &&
                    target <= nums[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};
