#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        int mx = -1;
        for(auto &i : nums){
        	mp[i]++;
        	mx = max(mx, mp[i]);
        }
        int sum = 0;
        for(auto &i : mp){
        	if(i.second == mx){
        		sum += mx;
        	}
        }
        return sum;
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
	int ans = sol.maxFrequencyElements(v);
	cout << ans << endl;
}