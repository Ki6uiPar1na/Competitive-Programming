/*
                                  ``````````````
                              ```     	STAY  ```
                           ```    		WITH      ```
                        ```	            PALESTINE    ```
                            ```		   	     		```
                                ```		    	```
                                    ````````````
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cout(n) cout << n << endl;
#define tc ll t; cin >> t; while(t--)
     vector<int> ps(2e5 + 10);
//Check Prime Numberr: 
bool Prime(int n){
    // Corner case
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool fact(int n){
int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
return factorial;
}
bool Composite(int n){
if(!Prime(n)){
return true;
}
else{
return false;
}
}
//Binary Serching
bool bin_search(int l, int r, int A[], int x){
    while(l <= r){
        int mid = (l + r) / 2;
        if(A[mid] == x){
            return true;
        }
        else{
            if(A[mid] < x){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    }
    return false;
}
ll Digit_sum(ll n){
    ll sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve(){
    tc{
        int n; cin >> n;
        cout << ps[n] << endl;
    }
}
 
int main()
{
    // vector<int> ps(2e5 + 10);
  for (int i = 1; i < 2e5 + 10; i++) {
    ps[i] = ps[i - 1];
    int x = i;
    while (x > 0) {
      ps[i] += x % 10;
      x /= 10;
    }
  }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}