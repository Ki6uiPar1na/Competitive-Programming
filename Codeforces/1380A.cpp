
/*
    If you see my code then i love you tooo......
*/

#include<bits/stdc++.h>
using namespace std; int main()
#define I_Love_You 10000
{
    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        bool flag = false;
        for(int i = 1; i < n - 1; i++){
            if(v[i] > v[i + 1] and v[i] > v[i - 1]){
                cout << "YES\n";
                cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << "NO\n";
    }
}