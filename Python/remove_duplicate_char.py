"""
-----------------------------------------------
Problem: Remove Duplicate Characters from String
-----------------------------------------------

Given a string, remove duplicate characters 
and return a string with only unique characters 
in the order of their first appearance.

-----------------------------------------------
Approach:
-----------------------------------------------
1. Initialize an empty string 'a' to store result
2. Traverse each character in the input string
3. For each character:
   - Check if it is not already in 'a'
   - If not present, append it to 'a'
4. Return the final string

-----------------------------------------------
Time Complexity:
O(n^2) -> 'in' check on string takes O(n)

Space Complexity:
O(n) -> for storing result string
-----------------------------------------------
"""

def remove_duplicates(s):
    a = ""   # ✅ fixed (no space)

    for ch in s:
        if ch not in a:
            a = a + ch

    return a


# Example usage
s1 = "hello"
result = remove_duplicates(s1)

print("Result:", result)
