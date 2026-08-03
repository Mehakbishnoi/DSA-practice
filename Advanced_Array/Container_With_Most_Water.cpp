/*
LeetCode 11: Container With Most Water

Problem:
Given an integer array height where height[i] represents the height of a vertical line,
find two lines that together with the x-axis form a container that can store the maximum
amount of water.

Approach:
- Use two pointers: left at the beginning and right at the end.
- Calculate the area between the two lines.
- Move the pointer with the smaller height because the smaller height limits the water.
- Continue until left and right pointers meet.

Formula:
Area = width * height
width = right - left
height = min(height[left], height[right])

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int maxarea = 0;

        while(left < right) {

            int width = right - left;
            int h = min(height[left], height[right]);

            int area = width * h;

            maxarea = max(maxarea, area);

            // Move the smaller height pointer
            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxarea;
    }
};