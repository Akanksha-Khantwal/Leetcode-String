# 🧩 Longest Prefix Suffix – GeeksforGeeks

## 📝 Problem Statement
Given a string **`s`**, find the length of the **longest proper prefix** which is also a **proper suffix**.  
A **proper prefix** is a prefix that is not equal to the entire string, and similarly, a **proper suffix** is a suffix that is not equal to the entire string.

---

## 🔍 Example
**Input:**  
s = "abab"

makefile
Copy code

**Output:**  
2

**Explanation:**  
The longest proper prefix which is also a suffix is `"ab"`, having length **2**.

---

## 💡 Approach
This problem is typically solved using the **LPS (Longest Prefix Suffix)** array concept from the **KMP (Knuth–Morris–Pratt)** algorithm.  

### Steps:
## 💡 Approach (According to the Given Code)

The solution uses the **KMP preprocessing algorithm** to compute the **LPS (Longest Prefix Suffix)** array.

### Step 1️⃣ – Initialize the LPS Array
- Create an array `lps` of size equal to the string length, initialized with zeros.
- `lps[i]` will store the length of the longest prefix which is also a suffix for substring `s[0...i]`.

### Step 2️⃣ – Initialize Pointers
- `pre = 0` → tracks the length of the current longest prefix.
- `suf = 1` → the current character being compared (suffix pointer).

### Step 3️⃣ – Iterate While `suf < s.size()`
We compare characters and build the `lps` array.
 ✅ Case 1: Characters Match (`s[pre] == s[suf]`)
- Increment both `pre` and `suf`.
- Set `lps[suf] = pre + 1` (since the match extends by one character).
if (s[pre] == s[suf]) {
    lps[suf] = pre + 1;
    pre++;
    suf++;

}
❌ Case 2: Characters Don’t Match

If characters don’t match:

If pre == 0 → no prefix match, so set lps[suf] = 0 and move suf ahead.

Else → move pre back to lps[pre - 1] to check for a shorter prefix.

else {
    if (pre == 0) {
        lps[suf] = 0;
        suf++;
    } else {
        pre = lps[pre - 1];
    }
}

Step 4️⃣ – Continue Until End

Repeat until suf reaches the end of the string.

Step 5️⃣ – Return the Result

The last value in the LPS array gives the length of the longest prefix that is also a suffix.

return lps[s.size() - 1];


⏱ **Time Complexity:** O(n)  
💾 **Space Complexity:** O(n)

---
