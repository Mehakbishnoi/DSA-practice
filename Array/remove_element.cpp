// LeetCode: Remove Element
// Approach: Two Pointer

// Time Complexity: O(n) → we traverse the array once
// Space Complexity: O(1) → no extra space used

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // position for valid elements

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
