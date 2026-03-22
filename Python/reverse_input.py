"""
 Problem: Reverse a Number

Problem Statement:
Given an integer, reverse its digits and print the reversed number.

Example:
Input: 1234
Output: 4321

 Approach:
1. Take an integer input from the user.
2. Initialize a variable 'reverse' to 0.
3. Use a while loop until the number becomes 0.
4. Extract the last digit using modulus operator (%).
5. Append the digit to 'reverse' using:
      reverse = reverse * 10 + digit
6. Remove the last digit from the number using integer division (//).
7. Print the reversed number.

 Time Complexity: O(n)
 Space Complexity: O(1)
 
"""

# Input from user
a = int(input("Enter number: "))

# Initialize reverse variable
reverse = 0

# Loop to reverse the number
while a > 0:
    digit = a % 10          # Get last digit
    reverse = reverse * 10 + digit   # Build reversed number
    a = a // 10            # Remove last digit

# Output result
print("Reversed number:", reverse)
