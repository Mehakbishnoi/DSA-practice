"""
 Problem: Check Palindrome Number

A number is palindrome if it reads same forward and backward.
Example: 121, 1331

Approach:
1. Store original number
2. Reverse the number using loop
3. Compare original and reversed number
"""

a = int(input("Enter number: "))
b = a

reverse = 0

while a > 0:
    digit = a % 10
    reverse = reverse * 10 + digit
    a = a // 10

if b == reverse:
    print("Palindrome")
else:
    print("Not a Palindrome")
