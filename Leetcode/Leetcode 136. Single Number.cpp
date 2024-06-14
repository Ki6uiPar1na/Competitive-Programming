class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        unordered_map<int, int> mp;
        for(auto &i : nums){
            mp[i]++;
        }
        for(auto &i : nums){
            if(mp[i] == 1){
                return i;
            }
        }
        return 0;
    }
};
