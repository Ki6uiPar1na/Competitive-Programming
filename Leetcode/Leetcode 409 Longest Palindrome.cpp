#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	map<char, int> mp;
	for(int i = 0; i < s.size(); i++){
		mp[s[i]]++;
	}
	int cn = 0;
	int flag = 0;
	if(s.size() == 0){
		cn = 0;
	}
	else if(mp.size() == 1){
		for(int i = 0; i < mp.size(); i++){
			cn += mp[s[i]];
		}
	}
	else{
	for(auto &i : mp){
		if(i.second % 2 == 0){
			cn += i.second;
		}
		if(i.second % 2 != 0 and flag != 1){
			cn += i.second;
			flag = 1;
		}
		else if(i.second % 2 != 0 and i.second != 1){
			cn += i.second - 1;
		}
	}
	}
	cout << cn << endl;
}