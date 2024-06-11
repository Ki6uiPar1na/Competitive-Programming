#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum = 0;
		for(auto &i : nums){
			sum += i;
		}
		return ((nums.size() * (nums.size() + 1)) / 2 - sum);
    }
};

int main()
{
	int n; cin >> n;
	vector<int> v(n);
	for(auto &i : v){
		cin >> i;
	}
	Solution sol;
	int ans = sol.missingNumber(v);
	cout << ans << endl;
}