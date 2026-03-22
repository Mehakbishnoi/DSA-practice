"""
 Problem: Print Square Star Pattern

Problem Statement:

Given an integer n, print a square pattern of stars of size n × n.

Example:
Input: 4

Output:
* * * *
* * * *
* * * *
* * * *

Approach:
1. Take input n (size of square).
2. Use two nested loops:
   - Outer loop → controls rows (runs n times)
   - Inner loop → prints '*' n times in each row
3. After printing each row, move to next line.

 Time Complexity: O(n^2)
Space Complexity: O(1)
"""

# Input from user
n = int(input("Enter size: "))

# Outer loop for rows
for i in range(n):
    
    # Inner loop for columns
    for j in range(n):
        print("*", end=" ")
    
    # Move to next line after each row
    print()
