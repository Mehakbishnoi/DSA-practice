# 📌 Problem Statement:
# Create a list from 0 to n-1 and remove duplicates using different approaches.

# 💡 Approach 1 (Manual Method):
# - Traverse list and add elements only if not already present
# - Preserves order

# 💡 Approach 2 (Using set):
# - Convert list to set and back to list
# - Faster but does NOT preserve order

# 💡 Approach 3 (Using dictionary):
# - Use dict.fromkeys() to remove duplicates
# - Preserves order (Python 3.7+)

# ⏱️ Complexity:
# Approach 1:
# Time Complexity: O(n^2)
# Space Complexity: O(n)

# Approach 2:
# Time Complexity: O(n)
# Space Complexity: O(n)

# Approach 3:
# Time Complexity: O(n)
# Space Complexity: O(n)

l1 = []

n = int(input("Enter number: "))

for item in range(n):
    l1.append(item)

#  Approach 1: Manual (order preserved)
a = []
for i in l1:
    if i not in a:
        a.append(i)
print("Unique list (manual):", a)

#  Approach 2: Using set (unordered)
a = list(set(l1))
print("Unique list (set):", a)

#  Approach 3: Using dictionary (order preserved)
a = list(dict.fromkeys(l1))
print("Unique list (dict):", a)
