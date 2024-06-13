// Author: Ki6uiPar1na
// Problem: A. Strange Splitting
// Contest: Codeforces - Codeforces Global Round 26
// URL: https://codeforces.com/contest/1984/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time: 2024-06-12 20:55:03

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t; cin >> t; while(t--)	{
		int n; cin >> n;
		vector<int> v(n);
		map<int, int> mp;
		for(auto &i : v){
			cin >> i;
			mp[i]++;
		}
		if(mp.size() == 1){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			string s(n, 'R');
			s[1] = 'B';
			cout << s;
			cout << '\n';
		}
	}
}
