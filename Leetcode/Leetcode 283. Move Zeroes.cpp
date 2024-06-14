class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cn = 0;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
                cn++;
            }
        }
        for(int i = cn; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};
