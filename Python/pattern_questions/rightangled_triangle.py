"""
Problem Statement:
------------------
Given an integer n, print a right-angled triangle pattern using '*' characters.

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
2. Use outer loop from 1 to n (for rows).
3. Use inner loop from 1 to i (for columns).
4. Print '*' in each iteration.
5. Move to next line after each row.

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
    for j in range(i):
        print("*", end=" ")
    print()
