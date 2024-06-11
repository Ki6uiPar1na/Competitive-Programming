#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    	vector<int> ans;
    	for(int i = 0; i < arr2.size(); i++){
    		for(int j = 0; j < arr1.size(); j++){
    			if(arr2[i] == arr1[j]){
    				ans.push_back(arr1[j]);
    			}
    		}
    	}
    	map<int, int> mp;
    	for(auto &i : ans){
    		mp[i]++;
    	}
    	vector<int> temp;
    	for(int i = 0; i < arr1.size(); i++){
    		bool f = false;
    		for(int j = 0; j < ans.size(); j++){
    			if(arr1[i] == ans[j]){
    				f = true;
    			}
    		}
    		if(!f){
    			temp.push_back(arr1[i]);
    		}
    		
    	}
    	sort(temp.begin(), temp.end());
    	for(auto &i : temp){
    		ans.push_back(i);
    	}
    	return ans;
        
    }
};

int main()
{
	int n1, n2; cin >> n1 >> n2; 
	vector<int> v1(n1), v2(n2);
	for(auto &i : v1) cin >> i;
	for(auto &i : v2) cin >> i;
	
	Solution sol;
	
	vector<int> ans = sol.relativeSortArray(v1, v2);
	for(auto &i : ans){
		cout << i << ' ';
	}
	cout << endl;
}