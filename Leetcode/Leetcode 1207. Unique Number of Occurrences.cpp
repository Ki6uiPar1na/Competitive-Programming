#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp, ansMap;
        for(auto &i : arr){
        	mp[i]++;
        }
        for(auto &i : mp){
        	ansMap[i.second]++;
        }
        return mp.size() == ansMap.size();
    }
};

int main()
{
	int n; cin >> n;
	vector<int> v(n);
	for(auto &i : v) cin >> i;
	
	Solution sol;
	if(sol.uniqueOccurrences(v)){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}
}


