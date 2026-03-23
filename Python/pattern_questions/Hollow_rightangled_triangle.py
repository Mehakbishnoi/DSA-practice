"""
Program: Right-Angled Triangle Border Pattern

Problem Statement:
Print a right-angled triangle of '*' stars where stars appear only on the borders 
(first column, last column, and last row). Example for n = 5:

* 
* * 
*   * 
*     * 
* * * * * 

Approach:
1. Take input 'n' as the number of rows.
2. Loop 'i' from 1 to n (each row):
   a) Loop 'j' from 1 to i (columns in the row):
      - Print '*' if it is the first column (j==1), last column (j==i), or last row (i==n)
      - Else, print space ' ' for alignment
3. Move to next line after each row.
This produces a right-angled triangle with stars on borders and last row filled.

Time Complexity: O(n^2)
  - Outer loop runs n times
  - Inner loop runs 1+2+...+n = n(n+1)/2 times

Space Complexity: O(1)
  - Only loop counters are used; no extra space
"""

# Input
n = int(input("Enter the number of rows: "))

# Loop to print right-angled triangle border pattern
for i in range(1, n + 1):
    for j in range(1, i + 1):
        if j == 1 or j == i or i == n:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()  # Move to next line
