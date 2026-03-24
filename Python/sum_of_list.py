#  Problem Statement:
# Create a list of numbers from 0 to n-1 and calculate the sum of all elements in the list.

#  Approach:
# 1. Take input n from the user
# 2. Initialize an empty list l1
# 3. Use a loop to append elements from 0 to n-1 into the list
# 4. Initialize sum = 0
# 5. Traverse the list and add each element to sum
# 6. Print the final sum

# Complexity:
# Time Complexity: O(n)  -> one loop for creation + one loop for sum
# Space Complexity: O(n) -> storing n elements in list

l1 = []

n = int(input("Enter number: "))

for item in range(n):
    l1.append(item)

sum = 0

for item in l1:
    sum += item

print("Sum of elements:", sum)
