"""
Program: Incremental Number Pyramid

Problem Statement:
Print numbers in a pyramid where numbers increment continuously row-wise.
Example for n = 5:
1
23
456
78910
1112131415

Approach:
1. Take input 'n' as the number of rows.
2. Initialize 'num' to 1 (starting number).
3. Loop 'i' from 1 to n (each row):
   a) Loop 'j' from 0 to i-1:
      - Print 'num' without newline
      - Increment 'num'
4. After inner loop, print a newline for the next row.

Time Complexity: O(n^2)
   - Outer loop runs n times
   - Inner loop runs sum of 1+2+...+n = n(n+1)/2 times
Space Complexity: O(1)
   - Only loop counters and 'num' variable used
"""

# Input
n = int(input("Enter the number of rows: "))
num = 1

# Loop to print incremental number pyramid
for i in range(1, n + 1):
    for j in range(i):
        print(num, end="")
        num += 1
    print()  # Move to next line
