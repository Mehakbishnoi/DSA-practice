# ------------------------------------------------------------
# Problem: First Non-Repeating Character in a String
# ------------------------------------------------------------
# Given a string s, find the first non-repeating character.
# If no such character exists, print "No unique character".
#
# Example:
# Input:  "aabbaccdef"
# Output: d
# ------------------------------------------------------------

s1 = "aabbaccdef"

# ------------------------------------------------------------
# Approach:
# 1. Count frequency of each character using a dictionary.
# 2. Traverse the string again and find the first character
#    with frequency equal to 1.
# 3. If found, print it and stop.
# 4. If not found, print "No unique character".
# ------------------------------------------------------------

# Step 1: Count frequency
freq = {}
for ch in s1:
    freq[ch] = freq.get(ch, 0) + 1

# Step 2: Find first non-repeating character
found = False
for ch in s1:
    if freq[ch] == 1:
        print("First non-repeating character:", ch)
        found = True
        break

# Step 3: Handle case when no unique character exists
if not found:
    print("No unique character")

# ------------------------------------------------------------
# Complexity Analysis:
# Time Complexity: O(n)
#   - First loop to count frequency -> O(n)
#   - Second loop to find result  -> O(n)
#
# Space Complexity: O(n)
#   - Dictionary to store frequencies
# ------------------------------------------------------------
