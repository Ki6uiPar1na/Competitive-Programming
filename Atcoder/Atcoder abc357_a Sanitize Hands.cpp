// Author: Ki6uiPar1na
// Problem: A - Sanitize Hands
// Contest: AtCoder - SuntoryProgrammingContest2024（AtCoder Beginner Contest 357）
// URL: https://atcoder.jp/contests/abc357/tasks/abc357_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

int32_t main()
{
	int n, m; cin >> n >> m;
	vector<int> v(n);
	for(auto &i : v) cin >> i;
	int sum = 0, cn = 0;
	for(int i = 0; i < n; i++){
		if(sum + v[i] > m){
			break;
		}
		cn++;
		sum += v[i];
	}
	cout << cn << endl;
	
}