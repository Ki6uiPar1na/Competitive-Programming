#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> ans;
    	map<int, int> mp;
    	for(int i = 0; i < nums.size(); i++){
    		mp[nums[i]] = i;
    	}
    	for(int i = 0; i < nums.size(); i++){
    		int temp = target - nums[i];
    		if(mp[temp] != 0 and mp[temp] != i){
    			ans.push_back(i), ans.push_back(mp[temp]);
    			// cout << i << ' ' << mp[temp] << endl;
    			return ans;
    		}
    	}
    	return ans;
    
};
};

int main()
{
	int n; cin >> n;
	vector<int> v(n + 1);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int terget; cin >> terget;
	Solution sol;
	vector<int> vAns = sol.twoSum(v, terget);
	for(int i = 0; i < 2; i++){
		cout << vAns[i] << ' ';
	}
	cout << endl;
}