#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	
        set<int> st;
        
        // find unique elements inserting into a set
        // set dosn't allow to store duplicate element
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        
        //declare a vector array to store the actual size of the array
        vector<int> ans;
        for(auto it = st.begin(); it != st.end(); it++){
        	ans.push_back(*it);
        }
        
        //assign ans to nums
        nums = ans;
        //return the number of unique element
        return st.size();
    }
};

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    Solution sol;
    int k = sol.removeDuplicates(nums);
    cout << k << endl;
    for(auto &i : nums){
        cout << i << ' ';
    }
    cout << endl;
    
    return 0;
}
