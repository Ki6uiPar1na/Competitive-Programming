#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                }
                if (s[i] == ')' and st.top() == '(') {
                    st.pop();
                } else if (s[i] == '}' and st.top() == '{') {
                    st.pop();
                } else if (s[i] == ']' and st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};

int main() {
    string s; 
    cin >> s;
    Solution sol;

    if (sol.isValid(s)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
