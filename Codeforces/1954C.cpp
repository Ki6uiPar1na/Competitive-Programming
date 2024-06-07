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
        string s1, s2; cin >> s1 >> s2;
        int stringLen = s1.length();
        int tergetPosition = -1;
        for(int i = 0; i < stringLen; i++){
            if(s1[i] != s2[i]){
                tergetPosition = i;
                break;
            }
        }
        char firstChar = s1[tergetPosition], secondChar = s2[tergetPosition];
        if(firstChar > secondChar){
            for(int i = tergetPosition + 1; i < stringLen; i++){
                if(s1[i] > s2[i]){
                    swap(s1[i], s2[i]);
                }
            }
        }
        else{
            for(int i = tergetPosition + 1; i < stringLen; i++){
                if(s2[i] > s1[i]){
                    swap(s1[i], s2[i]);
                }
            }
        }
        cout << s1 << '\n' << s2 << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}