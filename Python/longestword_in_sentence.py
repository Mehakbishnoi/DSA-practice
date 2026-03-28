# ------------------------------------------------------------
# Problem: Find the Longest Word in a String
# ------------------------------------------------------------
# Given a string, find the longest word present in it.
# If multiple words have the same maximum length,
# return the first one.
#
# Example:
# Input:  "i am preparing for placement"
# Output: "preparing"
# ------------------------------------------------------------

s1 = "i am preparing for placement"

# ------------------------------------------------------------
# Approach:
# 1. Split the string into words using space.
# 2. Assume first word as the largest.
# 3. Traverse through all words:
#    - Compare length of each word with current largest.
#    - Update largest if a longer word is found.
# 4. Print the longest word.
# ------------------------------------------------------------

# Step 1: Split string into words
words = s1.split()

# Step 2: Assume first word is largest
largest = words[0]

# Step 3: Traverse and compare lengths
for word in words:
    if len(word) > len(largest):
        largest = word

# Step 4: Output result
print("Longest word:", largest)


# ------------------------------------------------------------
# Complexity Analysis:
# Time Complexity: O(n)
#   - Splitting + traversing the string once
#
# Space Complexity: O(n)
#   - List of words created after split
# ------------------------------------------------------------
