# Program: Centered Reverse Pyramid Pattern

# Problem Statement:
# Print a centered reverse pyramid of '*' stars for a given number of rows.
# Example for n = 5:
# * * * * * 
#   * * * * 
#     * * * 
#       * * 
#         *

# Approach:
# 1. Take input 'n' as the number of rows.
# 2. Loop 'i' from n down to 1 (each iteration represents a row).
# 3. For each row:
#    a) Print (n - i) leading spaces to center the stars.
#    b) Print i stars with spaces between them.
# 4. Move to the next line after each row.
# This ensures a centered reverse pyramid pattern.

# Time Complexity: O(n^2)
#   - Outer loop runs n times
#   - Inner loops for spaces and stars run i and (n-i) times, summing to roughly n^2 operations

# Space Complexity: O(1)
#   - Only variables for loop counters are used; no extra data structures

# Input
n = int(input("Enter the number of rows: "))

# Loop to print centered reverse pyramid
for i in range(n, 0, -1):
    # Print leading spaces
    for j in range(n - i):
        print(" ", end=" ")
    # Print stars
    for j in range(i):
        print("*", end=" ")
    # Move to next line
    print()
