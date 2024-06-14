class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // sort(nums.begin(), nums.end());
        int cn = 0;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums[i] = INT_MAX;
            }
            else{
                ans.push_back(nums[i]);
                cn++;
            }
        }
        nums = ans;
        return cn;
    }
};
