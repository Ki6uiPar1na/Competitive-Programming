#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
    	vector<string> vs;
		string temp;
		stringstream ss(text);
		vector<int> v;
		while(ss >> temp){
			vs.push_back(temp);
		}
		vector<string> ans;
		for(int i = 0; i < vs.size() - 2; i++){
			if(vs[i] == first and vs[i + 1] == second){
				ans.push_back(vs[i + 2]);
			}
		}
		return ans;
    }
    
    vector<string> findOcurrencesAgain(string text, string first, string second){
    	vector<string> ans;
    	
    }
};

int main()
{
	string s; 
	getline(cin, s);
	string first, second; cin >> first >> second;
	
	Solution sol;
	vector<string> ans = sol.findOcurrences(s, first, second);
	for(auto &i : ans){
		cout << i << ' ';
	}
	cout << endl;
	
	
}