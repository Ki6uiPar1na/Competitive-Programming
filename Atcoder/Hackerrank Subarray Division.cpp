// Author: Ki6uiPar1na
// Problem: Subarray Division
// Contest: HackerRank - Algorithms - Implementation - Subarray Division - Prepare - Algorithms - Implementation
// URL: https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true
// Memory Limit: 512 MB
// Time Limit: 4000 ms

#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n";
#define no cout << "NO\n";


int main() {
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int d, m; 
    cin >> d >> m;
    
    int cn = 0;
    int sum = 0;
    for(int i = 0; i < m; i++) {
        sum += v[i];
    }
    for(int i = 0; i <= n - m; i++) {
        if(sum == d) {
            cn++;
        }
        sum -= v[i];
        if(i + m < n) {
            sum += v[i + m];
        }
    }
    
    cout << cn << endl;

    return 0;
}
