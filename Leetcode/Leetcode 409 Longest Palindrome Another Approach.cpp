#include<bits/stdc++.h>
using namespace std;

class solve {
public:
    int longestPalindrome(string s) {
        set<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.find(s[i]) == st.end()) {
                st.insert(s[i]);
            } else {
                st.erase(s[i]);
            }
        }
        int ans = s.size() - st.size();
        if(st.size() != 0){
        	ans++;
        }
        return ans;
    }
};

int main() {
    string s;
    cin >> s;
    
    solve sol;
    cout << sol.longestPalindrome(s) << endl;

    return 0;
}
