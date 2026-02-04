class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            // Push opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // For closing brackets, check for matching pair
            else {
                if (st.empty()) return false; // No matching opening bracket
                char top = st.top();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
                st.pop(); // Pop the matched opening bracket
            }
        }

        // Stack should be empty if all brackets matched
        return st.empty();
    }
};
