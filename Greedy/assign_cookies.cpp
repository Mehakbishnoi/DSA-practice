/*
LeetCode 455: Assign Cookies

Problem Statement:
------------------
Assume you are a parent trying to give cookies to children.
Each child has a greed factor g[i], which represents the minimum size
of cookie that the child will be satisfied with.

Each cookie has a size s[j]. If s[j] >= g[i], the child can be satisfied.
Each child can receive at most one cookie, and each cookie can be used once.

Return the maximum number of content children.


Approach:
---------
1. Sort the greed factors of children and cookie sizes.
2. Use two pointers:
   - i points to children.
   - j points to cookies.
3. Try to assign the smallest possible cookie to the least greedy child.
4. If the cookie satisfies the child, increase the count and move to the
   next child.
5. Move to the next cookie after every attempt.



Time Complexity:
----------------
O(m log m + n log n)
where m = number of children and n = number of cookies.

Space Complexity:
-----------------
O(1) (excluding sorting space)


*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; // child pointer
        int j = 0; // cookie pointer
        int count = 0;

        while(i < g.size() && j < s.size()) {

            if(s[j] >= g[i]) {
                count++;
                i++; // child satisfied
            }

            j++; // move to next cookie
        }

        return count;
    }
};
