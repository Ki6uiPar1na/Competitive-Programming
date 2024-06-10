#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int mx = -1, pos = 0;
        //edge case
        if(arr.size() < 3){
        	return false;
        }
        
        //determine pivot
        for(int i = 0; i < arr.size(); i++){
        	if(arr[i] == mx){
        		return false;
        	}
        	if(arr[i] > mx){
        		pos = i;
        		mx = arr[i];
        	}
        }
        //edge case
        if(pos == arr.size() - 1 or pos == 0){
        	return false;
        }
        //walk up
        int temp = arr[0];
        for(int i = 1; i < pos; i++){
        	if(arr[i] > temp){
        		temp = arr[i];
        	}
        	else{
        		return false;
        	}
        }
        //walk down
        temp = arr[pos];
        for(int i = pos + 1; i < arr.size(); i++){
        	if(arr[i] < temp){
        		temp = arr[i];
        	}
        	else{
        		return false;
        	}
        }
        return true;
    }
};

int main()
{
	int n; cin >> n;
	vector<int> arr(n);
	for(auto &i : arr) cin >> i;
	
	Solution sol;
	if(sol.validMountainArray(arr)){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}
}