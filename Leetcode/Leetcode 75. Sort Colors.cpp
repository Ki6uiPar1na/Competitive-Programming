#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        
        for(auto &i : nums){
        	mp[i]++;
        }
        int j = 0;
        for(auto &i : mp){
        	while(i.second--){
        		nums[j] = i.first;
        		j++;
        	}
        }
        
        for(auto &i : nums){
        	cout << i << ' ';
        }
        cout << endl;
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
	sol.sortColors(v);
}