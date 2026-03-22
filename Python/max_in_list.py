"""
 Problem: Find Largest Number in a List

 Problem Statement:
Given a list of numbers, find and print the largest element.

Example:
Input: [10, 4, 19, 11, 23]
Output: 23

 Approach:
1. Initialize 'largest' with the first element of the list.
2. Traverse the list starting from index 1.
3. Compare each element with 'largest'.
4. If current element is greater, update 'largest'.
5. Print the final 'largest' value.

Time Complexity: O(n)
 Space Complexity: O(1)
"""

# List of numbers
numbers = [10, 4, 19, 11, 23]

# Assume first element is largest
largest = numbers[0]

# Loop through remaining elements
for i in range(1, len(numbers)):
    if numbers[i] > largest:
        largest = numbers[i]

# Output result
print("Largest number:", largest)
