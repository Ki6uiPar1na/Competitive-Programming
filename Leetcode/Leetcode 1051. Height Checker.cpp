#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
    	vector<int> orginalArray = heights;
    	sort(heights.begin(), heights.end());
    	int cn = 0;
    	for(int i = 0; i < orginalArray.size(); i++){
    		if(orginalArray[i] != heights[i]){
    			cn++;
    		}
    	}
    	return cn;
        
    }
};

int main()
{
	int n; cin >> n; 
	vector<int> v(n);
	for(auto &i : v) cin >> i;
	Solution sol;
	int ans = sol.heightChecker(v);
	cout << ans << endl;
}
