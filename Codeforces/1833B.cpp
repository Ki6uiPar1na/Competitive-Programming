/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/07
|Time: 21:15:24
|Problem: 1833B
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
#define int long long
void solve() {
    tc{
        int n, k; cin >> n >> k;
        vector<int> v1(n), v2(n);
        for(auto &i : v1) cin >> i;
        for(auto &i : v2) cin >> i;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        vector<int> ans;
        // for(auto &i : v1) cout << i << ' ';
        // cout << endl;
        for(auto &i : v2)
        {
            ans.push_back(i);
        }
        for(auto &i : ans) cout << i << ' ';
        cout << endl;

    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}