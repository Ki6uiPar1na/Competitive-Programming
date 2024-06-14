class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp, mp2;
        vector<int> ans;
        for(auto &i : nums1){
            mp[i]++;
        }
        for(auto &i : nums2){
            if(mp[i] != 0 and mp2[i] == 0){
                ans.push_back(i);
                mp2[i]++;
            }
        }
        return ans;
    }
};
