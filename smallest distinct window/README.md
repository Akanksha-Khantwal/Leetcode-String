🧩 Smallest Distinct Window
📘 Problem Statement

Given a string S, find the length of the smallest substring (window) that contains all distinct characters present in the entire string.

📥 Example

Input:

S = "aabcbcdbca"


Output:

4


Explanation:
All distinct characters in the string are {a, b, c, d}.
The smallest substring containing all of them is "dbca", whose length is 4.

🧠 Approach
Count total distinct characters in the string using a frequency array or hash set.
Use a sliding window technique with two pointers (start and end).
Expand the window until all distinct characters are included.
Once all characters are inside, try to shrink the window from the left to minimize its size.
Keep track of the minimum window length found so far.
🧮 Algorithm Steps

Initialize:

count[256] → to track frequency of characters.
totalDistinct → total number of unique characters.
start = 0, minLen = s.size(), distinctCount = 0.
For each character at position end:
Increment frequency of s[end].
If it’s the first occurrence → increment distinctCount.
If distinctCount == totalDistinct:
Try shrinking from the left (start) while all distinct characters remain covered.


🕒 Time & Space Complexity
Operation	Complexity
Time	O(n) — each character is processed at most twice
Space	O(1) — fixed-size array of 256 characters
