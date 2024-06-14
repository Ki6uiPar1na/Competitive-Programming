class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size(), size2 = nums2.size();
        map<int, int> mp;
        vector<int> ans;
        if(size1 > size2){
            for(auto &i : nums1){
                mp[i]++;
            }
            for(auto &i : nums2){
                if(mp[i] != 0){
                    ans.push_back(i);
                    mp[i]--;
                }
            }
        }
        else{
            for(auto &i : nums2){
                mp[i]++;
            }
            for(auto &i : nums1){
                if(mp[i] != 0){
                    ans.push_back(i);
                    mp[i]--;
                }
            }
        }
        return ans;
    }
};
