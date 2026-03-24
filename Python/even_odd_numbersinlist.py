# 📌 Problem Statement:
# Create a list from 0 to n-1 and count the number of even and odd elements.

# 💡 Approach:
# 1. Take input n from user
# 2. Create list l1 from 0 to n-1
# 3. Initialize even = 0 and odd = 0
# 4. Traverse the list:
#    - If element % 2 == 0 → increment even
#    - Else → increment odd
# 5. Print counts

# ⏱️ Complexity:
# Time Complexity: O(n)
# Space Complexity: O(n)

l1 = []

n = int(input("Enter number: "))

for item in range(n):
    l1.append(item)

even, odd = 0, 0

for item in l1:
    if item % 2 == 0:
        even += 1
    else:
        odd += 1

print("Even count:", even)
print("Odd count:", odd)
