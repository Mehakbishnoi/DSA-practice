"""
Problem Statement:
------------------
Given an integer n, print a centered pyramid pattern using '*' characters.

Example:
Input: 5

Output:
    *
   * *
  * * *
 * * * *
* * * * *

--------------------------------------------------

Approach:
----------
1. Take input n.
2. Use an outer loop from 1 to n (rows).
3. For each row:
   - Print (n - i) spaces → for centering
   - Print i stars → for pyramid shape
4. Move to next line after each row.

--------------------------------------------------

Time Complexity:
----------------
O(n^2)

Space Complexity:
-----------------
O(1)

--------------------------------------------------
"""

n = int(input("Enter n: "))

for i in range(1, n + 1):
    # spaces
    for j in range(n - i):
        print(" ", end=" ")
    
    # stars
    for j in range(i):
        print("*", end=" ")
    
    print()
