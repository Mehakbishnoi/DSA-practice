#include <bits/stdc++.h>
using namespace std;

/*
Problem: Subarray Sum Equals K

Approach:
- Use prefix sum and hashmap
- Store frequency of prefix sums
- Check if (prefixSum - k) exists

Time Complexity: O(n)
Space Complexity: O(n)
*/

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mpp;
    mpp[0] = 1;

    int prefixsum = 0;
    int cnt = 0;

    for(int i = 0; i < nums.size(); i++) {
        prefixsum += nums[i];

        int remove = prefixsum - k;

        if(mpp.find(remove) != mpp.end()) {
            cnt += mpp[remove];
        }

        mpp[prefixsum]++;
    }

    return cnt;
}

int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;

    cout << "Count of subarrays: " << subarraySum(nums, k);
    return 0;
}
