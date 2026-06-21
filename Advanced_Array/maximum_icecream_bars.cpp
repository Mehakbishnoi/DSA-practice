/*
    LeetCode 1833. Maximum Ice Cream Bars

    Problem Statement:
    ------------------
    It is a sweltering summer day, and a boy wants to buy some ice cream bars.

    You are given an array costs where costs[i] is the price of the ith ice cream bar,
    and an integer coins representing the number of coins the boy initially has.

 

    Approach:
    ---------
    1. Sort the costs array in ascending order.
    2. Buy the cheapest ice cream bars first.
    3. Keep reducing coins and counting purchased bars.
    4. Stop when the next ice cream bar cannot be afforded.

    Time Complexity: O(n log n)
        - Sorting the array dominates the complexity.

    Space Complexity: O(1)
        - Ignoring the space used by the sorting algorithm.
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int count = 0;

        for (int cost : costs) {
            if (coins >= cost) {
                coins -= cost;
                count++;
            } else {
                break;
            }
        }

        return count;
    }
};
