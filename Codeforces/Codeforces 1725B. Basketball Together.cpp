// Author: Ki6uiPar1na
// Problem: B. Basketball Together
// Contest: Codeforces - COMPFEST 14 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/contest/1725/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time: 2024-06-11 03:27:51

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, d; cin >> n >> d;
	vector<int> v(n);
	for(auto &i : v) cin >> i;
	sort(v.begin(), v.end());
	int temp = n;
	int i = n - 1, cn = 0;
	while(temp > 0){
		int value = ceil(float(d) / v[i]);
		if(value * v[i] > d){
			if(temp - value >= 0){
				temp -= value;
				cn++;
			}
			else{
				break;
			}
		}
		else{
			value++;
			if(temp - value < 0){
				break;
			}
			temp -= value;
			cn++;
		}
		i--;
	}
	cout << cn << endl;
}