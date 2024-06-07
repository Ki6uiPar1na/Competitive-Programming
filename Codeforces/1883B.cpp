/*
    If you see my code, then i love you too.....
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        map<char, int> mp;
        for(int i = 0; i < n; i++){
            char ch = s[i];
            mp[ch]++;
        }
        bool flag = false;
        for(int i = 0; i < n and k != 0; i++){
            if(mp[s[i]] % 2 != 0){
                k--, mp[s[i]]--;
            }
        }
        int cnt = 0;
        for(auto &i : mp){
            if(i.second % 2 != 0){
                cnt++;
            }
        }
        if(cnt > 1){
            cout << "NO\n"; 
        }
        else{
            cout << "YES\n";
        }
    }
}