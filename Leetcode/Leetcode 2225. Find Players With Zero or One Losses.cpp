#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // Implementation of findWinners goes here
        map<int, int> winners, losers;
        
        vector<vector<int>> ans;
        
        // Count the winners and losers
        for(auto &i : matches){
            winners[i[0]]++;
            losers[i[1]]++;
        }
        
        // Find the winners
        for(auto &i : matches){
            if(losers[i[0]] == 0){
                ans.push_back({i[0]});
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> matches(n);
    for(auto &i : matches){
        cin >> i.first >> i.second;
    }
    Solution sol;
    vector<vector<int>> ans = sol.findWinners(matches);
    
    for(auto &i : ans){
        cout << i[0] << ' ';
    }
    cout << endl;
}
