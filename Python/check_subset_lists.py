# 📌 Problem Statement:
# Check whether all elements of list l1 are present in list l2 (subset check).

# 💡 Approach 1 (Using set):
# 1. Convert both lists into sets
# 2. Use issubset() to check:
#    - If set(l1) is subset of set(l2) → True
#    - Else → False

# 💡 Why not directly use 'in' operator?
# - 'in' checks only ONE element at a time
# - It cannot verify all elements of a list together
# - Example:
#     l1 = [1, 2]
#     l2 = [1, 2, 3]
#     l1 in l2 ❌ → False (because list is not an element of another list)
# - You would need a loop:
#     for i in l1:
#         if i not in l2:
#             return False
# - This makes it O(n*m), which is slower than set approach

# ⏱️ Complexity:
# Time Complexity: O(n + m)
# Space Complexity: O(n + m)

l1 = list(map(int, input("Enter elements of list1: ").split()))
l2 = list(map(int, input("Enter elements of list2: ").split()))

print(set(l1).issubset(set(l2)))
