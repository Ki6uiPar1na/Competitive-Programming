// Author: Ki6uiPar1na
// Problem: A. Problem Generator
// Contest: Codeforces - Codeforces Round 950 (Div. 3)
// URL: https://codeforces.com/contest/1980/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time: 2024-06-13 14:07:21

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--){
		int n , m; cin >> n >> m;
		string s; cin >> s;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			mp[int(s[i])]++;
		}
		int sum = 0;
		for(int i = 65; i < 72; i++){
			if(mp[i] >= m){
				continue;
			}
			sum += m - mp[i];
		}
		cout << sum << endl;
	}
}