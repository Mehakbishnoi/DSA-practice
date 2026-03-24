# 📌 Problem Statement:
# Create a list from 0 to n-1 and find the maximum difference 
# between consecutive elements in the list.

# 💡 Approach:
# 1. Take input n from user
# 2. Create list l1 from 0 to n-1
# 3. Initialize diff = 0
# 4. Traverse the list till second last element
# 5. Find absolute difference between consecutive elements
# 6. Update diff if current difference is greater
# 7. Print maximum difference

# ⏱️ Complexity:
# Time Complexity: O(n)
# Space Complexity: O(n)

l1 = []

n = int(input("Enter number: "))

for item in range(n):
    l1.append(item)

diff = 0

for i in range(len(l1) - 1):   # avoid index out of range
    a = abs(l1[i] - l1[i + 1])
    if a > diff:
        diff = a

print("Maximum difference:", diff)
