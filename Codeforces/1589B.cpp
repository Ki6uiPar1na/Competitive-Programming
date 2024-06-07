/*
    If you see this code then i love you tooo ........
*/


#include<bits/stdc++.h>
using namespace std; 
#define I_love_you cout 
int main()
{
    int t; cin >> t; while(t--)
    {
        int row, col; cin >> row >> col;
        long long ans = row * col;
        I_love_you << int(ceil(float(ans) / 3)) << endl;
    }
}