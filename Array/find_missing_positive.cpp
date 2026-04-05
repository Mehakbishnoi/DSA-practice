#include <bits/stdc++.h>
using namespace std;

// LeetCode 41: First Missing Positive
// find smallest missing positive number

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_map<int,int> mp;

        // store all elements
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        int n = nums.size();

        // check from 1 to n
        for(int i = 1; i <= n; i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }

        // if all present
        return n + 1;
    }
};
