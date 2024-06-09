#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    	map<int, int> mp;
    	mp[0]++;
    	long long sum = 0;
    	int cn = 0;
    	for(int i = 0; i < nums.size(); i++){
    		sum += nums[i];
    		int remove = sum - k;
    		cn += mp[remove];
    		mp[sum]++;
    	}
    	return cn;
    }
};

int main()
{
	int n, k; cin >> n >> k;
	vector<int> nums(n);
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}
	Solution sol;
	int ans = sol.subarraySum(nums, k);
	cout << ans << endl;
	
}