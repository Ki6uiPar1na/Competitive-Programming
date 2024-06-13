// Author: Ki6uiPar1na
// Problem: A. Verify Password
// Contest: Codeforces - Educational Codeforces Round 166 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1976/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time: 2024-06-12 16:19:05

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		bool f = false;
		for(int i = 0; i < n - 1; i++){
			if(s[i] > s[i + 1]){
				f = true;
				break;
			}
		}
		if(f) cout << "NO\n";
		else cout << "YES\n";
	}
}