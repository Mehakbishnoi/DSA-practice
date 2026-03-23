"""
Problem Statement:
------------------
Given an integer n, print a hollow square pattern of size n x n using '*' characters.

Example:
Input: 5

Output:
* * * * *
*       *
*       *
*       *
* * * * *

--------------------------------------------------

Approach:
----------
1. Take input n (size of square).
2. Use two nested loops:
   - Outer loop (i) for rows
   - Inner loop (j) for columns
3. For each position (i, j):
   - Print '*' if:
       • First row (i == 0)
       • Last row (i == n-1)
       • First column (j == 0)
       • Last column (j == n-1)
   - Otherwise, print space ("  ")
4. Move to next line after each row.

--------------------------------------------------

Time Complexity:
----------------
O(n^2)
- Because we traverse n rows and n columns

Space Complexity:
-----------------
O(1)
- No extra space used (only variables)

--------------------------------------------------
"""

# Hollow Square Pattern Code

n = int(input("Enter size: "))

for i in range(n):
    for j in range(n):
        if i in (0, n-1) or j in (0, n-1):
            print("*", end=" ")
        else:
            print("  ", end="")
    print()
