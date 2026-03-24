# 📌 Problem Statement:
# Create a dictionary by combining two lists: one for keys and one for values.

# 💡 Approach:
# 1. Take two lists as input (keys and values)
# 2. Use zip() to pair elements from both lists
# 3. Convert the zipped pairs into a dictionary using dict()

# ⏱️ Complexity:
# Time Complexity: O(n)
# Space Complexity: O(n)

keys = list(map(int, input("Enter keys: ").split()))
values = list(map(int, input("Enter values: ").split()))

# Create dictionary
a = dict(zip(keys, values))

print(a)
