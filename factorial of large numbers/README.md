🧮 Factorial of Large Numbers
📘 Problem Statement

Given an integer N, find the factorial of N.
Since the factorial of a large number can be extremely big, the result must be stored and returned as an array (or vector) where each element represents a single digit of the factorial.

💡 Example

Input:

N = 5


Output:

120


Explanation:
The factorial of 5 is 5 × 4 × 3 × 2 × 1 = 120.

⚙️ Approach
Initialize a vector ans with {1} to store digits of the factorial.
Loop from 2 to N:
Multiply each element in ans by the current number.
Handle carry values after each multiplication.
Reverse the vector at the end to get the digits in correct order.

This approach simulates manual multiplication like we do on paper, making it possible to handle numbers with hundreds or thousands of digits.

🧠 Algorithm
Initialize ans = [1].
For every integer x from 2 to N:
Multiply x with each digit in ans.
Store the result back into ans while keeping track of carry.
If any carry remains, split it into digits and append to ans.
Reverse ans to obtain the final factorial.
