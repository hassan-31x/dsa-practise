//? 
//! T.C: O(n) S.C: O(n)
// https://leetcode.com/problems/valid-parentheses/submissions/1286462850

bool isValid(string s) {
    stack<char> open;
    unordered_map<char, char> parens = {
        { ')', '(' },
        { ']', '[' },
        { '}', '{' },
    };
    
    for (const auto& c : s) {
        if (parens.find(c) != parens.end()) { // if 'c' not a key in parens

            // if input starts with a closing bracket.
            if (open.empty()) {
                return false;
            }

            if (open.top() != parens[c]) {
                return false;
            }

            open.pop();
        } else {
            open.push(c);
        }
    }
    
    return open.empty();
}