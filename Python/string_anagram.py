# ------------------------------------------------------------
# Problem: Check if Two Strings are Anagrams
# ------------------------------------------------------------
# Given two strings s1 and s2, check whether they are anagrams.
# Assumption: Strings contain only lowercase English letters.
#
# Example:
# Input:  s1 = "listen", s2 = "tsilen"
# Output: anagram
# ------------------------------------------------------------

s1 = "listen"
s2 = "tsilen"

# ------------------------------------------------------------
# Approach (Optimal - Constant Space):
# 1. If lengths are different → not anagram.
# 2. Create an array of size 26 (for a-z).
# 3. Increment count for s1 characters.
# 4. Decrement count for s2 characters.
# 5. If all values are 0 → anagram.
# ------------------------------------------------------------

# Step 1: Length check
if len(s1) != len(s2):
    print("not anagram")

else:
    count = [0] * 26   # array for 'a' to 'z'

    # Step 2 & 3: Process both strings
    for i in range(len(s1)):
        count[ord(s1[i]) - ord('a')] += 1
        count[ord(s2[i]) - ord('a')] -= 1

    # Step 4: Check if all counts are zero
    if all(c == 0 for c in count):
        print("anagram")
    else:
        print("not anagram")

# ------------------------------------------------------------
# Complexity Analysis:
# Time Complexity: O(n)
#   - Single loop through strings
#
# Space Complexity: O(1)
#   - Fixed size array (26 characters)
# ------------------------------------------------------------
