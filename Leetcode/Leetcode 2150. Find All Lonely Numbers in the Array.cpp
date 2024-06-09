#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findLonlyElement(vector<int> &nums){
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        //check hashing
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i] - 1] == 0 and mp[nums[i] + 1] == 0 and mp[nums[i]] == 1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

int main()
{
    int n; cin >> n;
    vector<int> nums(n);
    
    //take input
    
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    Solution sol;
    vector<int> ans = sol.findLonlyElement(nums);

    
    //print answer vector
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
}
