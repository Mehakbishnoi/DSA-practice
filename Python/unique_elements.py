# 📌 Problem Statement:
# Create a list from 0 to n-1 and check whether all elements in the list are unique.

# 💡 Approach:
# 1. Create list l1 from 0 to n-1
# 2. Convert list into set
# 3. Compare lengths:
#    - If len(list) == len(set), all elements are unique
#    - Else, duplicates exist

# ⏱️ Complexity:
# Time Complexity: O(n)
# Space Complexity: O(n)

l1 = []

n = int(input("Enter number: "))

for item in range(n):
    l1.append(item)

if len(l1) == len(set(l1)):
    print("unique")
else:
    print("not unique")
