/*
Problem: Next Permutation

Given an array of integers nums, rearrange the numbers into the 
lexicographically next greater permutation of numbers.

If such arrangement is not possible, rearrange it as the lowest 
possible order (sorted in ascending order).

Example:
Input:  [1,2,3]
Output: [1,3,2]

Input:  [3,2,1]
Output: [1,2,3]


Approach:
1. Find the first decreasing element from the right side.
   This index is called the breakpoint.

2. Find the smallest number greater than nums[index] from the right
   side and swap them.

3. Reverse the elements after the breakpoint to get the smallest
   possible order.


Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int indx = -1;

        // Step 1: Find breakpoint
        for(int i = n-2; i >= 0; i--) {
            if(nums[i] < nums[i+1]) {
                indx = i;
                break;
            }
        }

        // Step 2: Swap with next greater element
        if(indx != -1) {
            for(int i = n-1; i > indx; i--) {
                if(nums[i] > nums[indx]) {
                    swap(nums[i], nums[indx]);
                    break;
                }
            }
        }

        // Step 3: Reverse remaining elements
        reverse(nums.begin() + indx + 1, nums.end());
    }
};