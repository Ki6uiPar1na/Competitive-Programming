#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        std::vector<int> v(n) ;
        long long sum  = 0;
        for(auto &i : v){
            cin >> i;
            sum += i;
        }
        int temp = 0;
        int avg = sum / n;
        bool f = false;
        //cout << avg << endl;
        for(int i = 0; i < n - 1; i++){
            v[i] += temp;
            if(v[i] < avg){
                f = true;
                break;
            }
            else{
               v[i + 1] += (v[i] - avg);
            }
        }
        if(v[n - 1] < avg){
            f = true;
        }
        if(f) cout << "NO" << endl;
        else cout << "YES" << endl;
        // int avg = sum / n;
        // cout << avg << endl;
    }
}