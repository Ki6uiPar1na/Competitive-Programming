#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> mp;
        stringstream ss(s1);
        string word;
        while(ss >> word){
        	mp[word]++;
        }
        stringstream ss1(s2);
        while(ss1 >> word){
        	mp[word]++;
        }
        
        vector<string> ans;
        for(auto &i : mp){
        	if(i.second == 1){
        		ans.push_back(i.first);
        	}
        }
        return ans;
    }
};

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	Solution sol;
	vector<string> vs = sol.uncommonFromSentences(s1, s2);
	for(auto &i : vs){
		cout << i << ' ';
	}
	cout << endl;
}