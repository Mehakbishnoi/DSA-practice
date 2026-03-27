#include <iostream>
using namespace std;

/*
⏱ Complexity:
Time Complexity: O(m + n)
Space Complexity: O(m + n)
*/

void merge(int nums1[], int m, int nums2[], int n) {

    int result[1000]; // assuming max size (or use dynamic if needed)

    int i = 0, j = 0, k = 0;

    // merge both arrays
    while(i < m && j < n) {
        if(nums1[i] < nums2[j]) {
            result[k++] = nums1[i++];
        } else {
            result[k++] = nums2[j++];
        }
    }

    // remaining elements
    while(i < m) {
        result[k++] = nums1[i++];
    }

    while(j < n) {
        result[k++] = nums2[j++];
    }

    // copy back to nums1
    for(int x = 0; x < m + n; x++) {
        nums1[x] = result[x];
    }
}

int main() {
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};

    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    // print result
    for(int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}
