#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	map<int, int> mp;
    	int half = nums.size() / 2;
    	for(auto &i : nums){
    		mp[i]++;
    		if(mp[i] > half){
    			return i;
    		}
    	}
    	return -1;
    }
};

int main()
{
	int n; cin >> n;
	vector<int> v(n);
	for(auto &i : v) cin >> i;
	Solution sol;
	cout << sol.majorityElement(v) << endl;
}