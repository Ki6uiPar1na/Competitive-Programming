class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        
        for(auto &i : nums){
        	mp[i]++;
        }
        int j = 0;
        for(auto &i : mp){
        	while(i.second--){
        		nums[j] = i.first;
        		j++;
        	}
        }
        
        for(auto &i : nums){
        	cout << i << ' ';
        }
        cout << endl;
    }
};
