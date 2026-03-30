#include <bits/stdc++.h>
using namespace std;

/*
Problem: Best Time to Buy and Sell Stock

Approach:
- Track minimum price so far
- Calculate profit at each step
- Update maximum profit

Time Complexity: O(n)
Space Complexity: O(1)
*/

int maxProfit(vector<int>& prices) {
    int n = prices.size();

    int profit = 0;
    int mini = prices[0];

    for(int i = 1; i < n; i++) {
        int cost = prices[i] - mini;

        // Update max profit
        profit = max(profit, cost);

        // Update minimum price
        mini = min(mini, prices[i]);
    }

    return profit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << "Maximum Profit: " << maxProfit(prices);
    return 0;
}
