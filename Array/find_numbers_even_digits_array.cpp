#include <iostream>
using namespace std;

/*
📌 Problem: Find Numbers with Even Number of Digits

Given an array nums[] of size n, return how many numbers
contain an even number of digits.

------------------------------------------------------

💡 Approach:

1. Traverse each element of the array
2. For every number:
   - Count digits using division (num /= 10)
   - Special case: if number is 0 → digits = 1
3. If digit count is even → increase count
4. Return final count

------------------------------------------------------

⏱ Complexity:

Time Complexity: O(n * log10(num))
- For each number, we count digits

Space Complexity: O(1)
- No extra space used

------------------------------------------------------
*/

int findNumbers(int nums[], int n) {

    int even_nums = 0;

    for(int i = 0; i < n; i++) {
        
        int num = abs(nums[i]);
        int count = 0;

        // count digits
        if(num == 0) count = 1;
        else {
            while(num > 0) {
                num /= 10;
                count++;
            }
        }

        // check even digits
        if(count % 2 == 0) {
            even_nums++;
        }
    }

    return even_nums;
}

int main() {
    int nums[] = {12, 345, 2, 6, 7896};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << findNumbers(nums, n);

    return 0;
}
