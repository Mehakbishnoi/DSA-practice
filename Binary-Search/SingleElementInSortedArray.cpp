/*
Problem:
Given a sorted array where every element appears exactly twice
except for one element that appears only once, return that element.

The solution must run in O(log n) time and O(1) space.

Approach:
- In a sorted array, pairs appear together.
- Before the single element, pairs start at even indices.
- After the single element, the pairing pattern shifts.
- Use binary search to find where the pattern breaks.
- If nums[mid] is different from both neighbours,
  then nums[mid] is the single element.
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        // Handle edge cases
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

        int start = 1;
        int end = n - 2;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            // Found the unique element
            if (nums[mid] != nums[mid - 1] &&
                nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // Pairing pattern is correct, move right
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
                (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
                start = mid + 1;
            }
            // Pattern breaks, move left
            else {
                end = mid - 1;
            }
        }

        return -1;
    }
};

/*
Time Complexity: O(log n)
Space Complexity: O(1)
*/