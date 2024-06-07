/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/06
|Time: 20:39:48
|Problem: A_Beautiful_Year
|_____________________________________________________ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)

// Check Prime Number
bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Factorial Function
ll factorial(int n) {
    ll fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Composite Number Check
bool is_composite(int n) {
    return !is_prime(n);
}

// Binary Search
bool bin_search(int l, int r, int arr[], int x) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

// Sum of Digits
ll digit_sum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool distinct(int n){
    string s = to_string(n);
    // cout << s << endl;
    map<char, int> mp;
    mp[s[0]]++, mp[s[1]]++, mp[s[2]]++, mp[s[3]]++;
    if(mp.size() == 4) return true;
    else return false;
}

void solve() {
    int n; cin >> n;
    for(int i = n + 1;; i++){
        if(distinct(i)){
            cout << i << endl;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}