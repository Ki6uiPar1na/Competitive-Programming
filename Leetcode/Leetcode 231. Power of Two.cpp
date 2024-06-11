#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(long long n) {
        if (n <= 0)
            return false;
        return (n & (n - 1)) == 0;
    }
};

int main()
{
	long long n; cin >> n; 
	Solution sol;
	if(sol.isPowerOfTwo(n)){
		cout << "yes\n";
	}
	else{
		cout << "no\n";
	}
}
