// Author: Ki6uiPar1na
// Problem: B. Queries about less or equal elements
// Contest: Codeforces - Educational Codeforces Round 2
// URL: https://codeforces.com/contest/600/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time: 2024-06-10 18:48:14

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	for(auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	while(m--){
		int num; cin >> num;
		cout << upper_bound(a.begin(), a.end(), num) - a.begin() << ' ';
	}
	cout << endl;
}