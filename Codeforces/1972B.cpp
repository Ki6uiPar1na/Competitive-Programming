#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int cn1 = count(s.begin(), s.end(), 'U');
		// cout << cn1 << endl;
		if(cn1 & 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}