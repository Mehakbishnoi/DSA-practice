"""
Problem Statement:
------------------
Given two integers rows and columns, print a solid rectangle pattern of '*' 
with the given dimensions.

Example:
Input:
rows = 3, columns = 5

Output:
* * * * *
* * * * *
* * * * *

--------------------------------------------------

Approach:
----------
1. Take input for number of rows and columns.
2. Use two nested loops:
   - Outer loop runs for each row
   - Inner loop runs for each column
3. Print '*' for every column in a row.
4. Move to next line after each row.

--------------------------------------------------

Time Complexity:
----------------
O(rows × columns)

Space Complexity:
-----------------
O(1)

--------------------------------------------------
"""

rows = int(input("Enter rows: "))
columns = int(input("Enter columns: "))

for i in range(rows):
    for j in range(columns):
        print("*", end=" ")
    print()
