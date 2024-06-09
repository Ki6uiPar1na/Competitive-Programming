#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
    	vector<char> trackChar;
    	map<char, int> mp;
    	for(int i = 0; i < s.size(); i++){
    		trackChar.push_back(s[i]);
    		mp[s[i]]++;
    	}
    	for(int i = 0; i < s.size(); i++){
    		if(mp[s[i]] == 1){
    			return i;
    		}
    	}
    	return -1;
        
    }
};

int main()
{
	string s; cin >> s;
	Solution sol;
	
	int ans = sol.firstUniqChar(s);
	cout << ans << endl;
	
}