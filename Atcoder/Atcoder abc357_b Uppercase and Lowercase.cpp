// Author: Ki6uiPar1na
// Problem: B - Uppercase and Lowercase
// Contest: AtCoder - SuntoryProgrammingContest2024（AtCoder Beginner Contest 357）
// URL: https://atcoder.jp/contests/abc357/tasks/abc357_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

int32_t main()
{
	string s; cin >> s;
	int up = 0, lw = 0;
	for(int i = 0; i < s.size(); i++){
		if(islower(s[i])){
			lw++;
		}
		else{
			up++;
		}
	}
	if(up > lw){
		for(int i = 0; i < s.size(); i++){
			s[i] = toupper(s[i]);
		}
	}
	else{
		for(int i = 0; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
	}
    cout << s << endl;
	
}