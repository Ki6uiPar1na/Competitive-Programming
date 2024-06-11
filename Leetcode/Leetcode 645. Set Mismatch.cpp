#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;
        for(auto &i : nums){
        	mp[i]++;
        	if(mp[i] == 2){
        		ans.push_back(i);
        	}
        }
        long long tempSum = 0;
        for(auto &i : mp){
        	tempSum += i.first;
        }
        long long sum = (nums.size() * (nums.size() + 1)) / 2;
        ans.push_back(sum - tempSum);
        return ans;
    }
};


int main()
{
	int n; cin >> n;
	vector<int> v(n);
	for(auto &i : v) cin >> i;
	Solution sol;
	
	vector<int> ans = sol.findErrorNums(v);
	for(auto &i : ans){
		cout << i << ' ';
	}
	cout << endl;
}


