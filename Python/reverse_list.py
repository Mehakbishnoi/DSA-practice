# 📌 Problem Statement:
# Create a list from 0 to n-1 and print the reversed list using different approaches.

# 💡 Approach 1 (Slicing):
# - Use [::-1] to reverse the list
# - Returns a new reversed list

# 💡 Approach 2 (reverse() method):
# - Use list.reverse() to reverse in-place
# - Modifies original list

# 💡 Approach 3 (Manual loop):
# - Traverse list from last index to first
# - Append elements into a new list

# ⏱️ Complexity:
# Approach 1:
# Time Complexity: O(n)
# Space Complexity: O(n)

# Approach 2:
# Time Complexity: O(n)
# Space Complexity: O(1)

# Approach 3:
# Time Complexity: O(n)
# Space Complexity: O(n)

l1 = []

n = int(input("Enter number: "))

for item in range(n):
    l1.append(item)

# ✅ Approach 1: Using slicing
print("Reversed (slicing):", l1[::-1])

# ✅ Approach 2: Using reverse() method (in-place)
l1.reverse()
print("Reversed (reverse method):", l1)

# ✅ Approach 3: Manual loop
rev = []
for i in range(len(l1) - 1, -1, -1):
    rev.append(l1[i])

print("Reversed (manual):", rev)
