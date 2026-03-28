# Problem: Generate all substrings of a string

s1 = "abc"

# Approach:
# Use two loops:
# i -> starting index
# j -> ending index (i+1 to len(s1))
# Print substring s1[i:j]

for i in range(len(s1)):
    for j in range(i + 1, len(s1) + 1):
        print(s1[i:j])
