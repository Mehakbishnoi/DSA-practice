# 📌 Problem: Reverse Words in a Sentence
# Input: "I love programming"
# Output: "programming love I"

# 💡 Approach:
# 1. Split string into words
# 2. Reverse word list
# 3. Join words back into a sentence

s1 = "I love programming"

# Step 1: Split into words
words = s1.split()

# Step 2: Reverse words
words = words[::-1]

# Step 3: Join back into sentence
result = " ".join(words)

print(result)

# ⏱ Complexity Analysis:
# Time Complexity: O(n)
# - split() -> O(n)
# - reverse -> O(k)
# - join -> O(n)
#
# Space Complexity: O(n)
# - storing list of words
