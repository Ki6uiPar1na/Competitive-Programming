// Author: Ki6uiPar1na
// Problem: C. Good Prefixes
// Contest: Codeforces - Codeforces Round 952 (Div. 4)
// URL: https://codeforces.com/contest/1985/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time: 2024-06-12 15:14:00

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t; cin >> t; while(t--){
		ll n; cin >> n;
		vector<ll> v(n);
		for(auto &i : v) cin >> i;
		ll ans = 0, mx = -1, sum = 0;
		
		for(int i = 0; i < n; i++){
			sum += v[i];
			mx = max(mx, v[i]);
			if(sum - mx == mx) ans++;
		}
		cout << ans << endl;
	}
	
}