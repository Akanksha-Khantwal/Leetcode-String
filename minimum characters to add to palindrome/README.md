# 🧩 Minimum Characters to be Added at Front to Make String Palindrome

### 💻 Problem Description
Given a string **`s`**, the task is to find the **minimum number of characters** that need to be **added at the front** of the string to make it a **palindrome**.

### 🧠 Example
**Input:**
s = "AACECAAAA
**Output:**
2

**Explanation:**
By adding `"AA"` in front, the string becomes `"AAAACECAAAA"`, which is a palindrome.

---

### 🚀 Approach
This problem is solved using the **KMP (Knuth-Morris-Pratt) prefix function**.

#### 🔹 Steps:
1. Reverse the string `s` and store it in `rev`.
2. Combine them as:
final = s + '$' + rev

markdown
Copy code
(`$` is a special delimiter to avoid overlap between `s` and `rev`.)
3. Compute the **LPS (Longest Prefix Suffix)** array for `final`.
4. The last value of the `lps` array gives the **length of the longest palindromic prefix** in `s`.
5. The answer is:
s.size() - lps[final.size() - 1]



⏱️ Time Complexity

O(N)
Each character in final is visited at most twice while building the LPS array.
Therefore, the algorithm runs in linear time relative to the string length.

💾 Space Complexity

O(N)
We use an auxiliary lps array of size equal to the combined string (final).
