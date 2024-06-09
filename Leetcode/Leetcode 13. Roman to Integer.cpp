#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        for(int i = 0; i < s.size(); ){
            if(s[i] == 'I' && s[i + 1] == 'V'){
                sum += 4;
                i += 2;
            }
            else if(s[i] == 'I' && s[i + 1] == 'X'){
                sum += 9;
                i += 2;
            }
            else if(s[i] == 'X' && s[i + 1] == 'L'){
                sum += 40;
                i += 2;
            }
            else if(s[i] == 'X' && s[i + 1] == 'C'){
                sum += 90;
                i += 2;
            }
            else if(s[i] == 'C' && s[i + 1] == 'D'){
                sum += 400;
                i += 2;
            }
            else if(s[i] == 'C' && s[i + 1] == 'M'){
                sum += 900;
                i += 2;
            }
            else{
                sum += mp[s[i]];
                i++;
            }
        }
        return sum;
        
    }
};

int main()
{
    string s; cin >> s;
    Solution sol;
    int ans = sol.romanToInt(s);
    cout << ans << endl;
}
