# 📌 Problem Statement:
# Rotate a list to the right by k positions using slicing.

# 💡 Approach:
# 1. Take input list and value k
# 2. Use slicing:
#    - Last k elements → l1[-k:]
#    - Remaining elements → l1[:-k]
# 3. Concatenate both parts

# ⏱️ Complexity:
# Time Complexity: O(n)
# Space Complexity: O(n)

l1 = list(map(int, input("Enter elements: ").split()))
k = int(input("Enter rotation count: "))

k = k % len(l1)   # handle k > n

a = l1[-k:] + l1[:-k]

print("Rotated list:", a)
