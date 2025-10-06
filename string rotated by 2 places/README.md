📘 Problem Statement

Given two strings str1 and str2, the task is to determine if str2 is a rotation of str1 by exactly two places.

A string str1 can be rotated in two directions:

Clockwise rotation by 2 places (e.g., "amazon" → "onamaz")
Anti-clockwise rotation by 2 places (e.g., "amazon" → "azonam")

You must check if either of these rotations of str1 equals str2.

🧩 Example

Input:

str1 = "amazon"
str2 = "onamaz"


Output:

true


Explanation:
If we rotate "amazon" clockwise by two places, we get "onamaz", which matches str2.

⚙️ Approach
If the lengths of both strings are not the same → return false.
Generate:
Clockwise rotation: move last two characters to the front.
Anti-clockwise rotation: move first two characters to the end.
If str2 matches either rotation → return true.

🕒 Time Complexity

O(n) — for generating the rotated strings and comparing.

🧠 Space Complexity

O(n) — to store the rotated strings.








