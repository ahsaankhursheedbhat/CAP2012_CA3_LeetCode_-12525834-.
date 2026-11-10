class Solution {
public:
    bool isValid(string s) {
        stack<char> st;                       // holds opening brackets waiting to be matched

        for (char c : s) {                    // look at each character
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);                   // opening bracket: push
            } else {
                if (st.empty()) return false; // closing bracket but nothing to match

                char top = st.top();          // most recent opening bracket
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();                 // matched pair: remove it
                } else {
                    return false;             // wrong type of bracket
                }
            }
        }
        return st.empty();                    // valid only if no unmatched openings remain
    }
};