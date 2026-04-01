#include <vector>
using namespace std;

/*
Problem
Given an array nums with equal number of positive and negative integers
rearrange it so that positive and negative numbers come alternately
starting with a positive number

Approach
Create a new array of same size
Keep two indexes one for positive and one for negative
Place positive numbers at even indexes 0 2 4
Place negative numbers at odd indexes 1 3 5
Traverse the array and fill accordingly

Time complexity O(n)
Space complexity O(n)
*/

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n);

    int posIndex = 0;
    int negIndex = 1;

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            ans[posIndex] = nums[i];
            posIndex += 2;
        } else {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }

    return ans;
}
