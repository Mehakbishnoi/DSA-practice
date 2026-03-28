"""
-----------------------------------------------
Problem: Count Vowels and Consonants
-----------------------------------------------

Given a string, count the number of vowels 
and consonants. Ignore digits and special characters.

-----------------------------------------------
Approach:
-----------------------------------------------
1. Initialize two counters:
   - v for vowels
   - c for consonants

2. Traverse each character in the string:
   - Check if the character is an alphabet using isalpha()
   - If yes:
       → Check if it is a vowel (present in "aeiouAEIOU")
           - If yes, increment vowel count
           - Else, increment consonant count

3. Print the counts

-----------------------------------------------
Time Complexity:
O(n)  -> traverse the string once

Space Complexity:
O(1)  -> no extra space used
-----------------------------------------------
"""

def count_vowels_consonants(s):
    vowels = "aeiouAEIOU"
    v = 0
    c = 0

    for ch in s:
        if ch.isalpha():
            if ch in vowels:
                v += 1
            else:
                c += 1

    return v, c


# Example usage
s1 = "Gate2027"
v, c = count_vowels_consonants(s1)

print("Vowels:", v)
print("Consonants:", c)
