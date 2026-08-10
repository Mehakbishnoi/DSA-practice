

class Solution {
public:

    // Function to check if substring is a palindrome
    bool check(string s, int left, int right) {

        while(left < right) {

            // If characters don't match, it is not a palindrome
            if(s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }


    bool validPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        // Compare characters from both ends
        while(left < right) {

            if(s[left] == s[right]) {

                left++;
                right--;
            }

            else {

                // At first mismatch, we can remove either:
                // 1. Left character
                // 2. Right character
                // Check both possibilities

                return check(s, left + 1, right) || 
                       check(s, left, right - 1);
            }
        }

        return true;
    }
};
