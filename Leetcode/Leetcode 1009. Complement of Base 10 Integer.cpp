#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        
        string s = "";
        int cn = 0;
        //corner case, that i first time don't care, and i got WA on TC-127 out of TC-128
        if(n == 0){
        	return 1;
        }
        
        //convert n to binary string 
        while(n != 0){
        	s += to_string(n % 2);
        	n /= 2;
        }
        
        //filp 0 to 1 and 1 to 0
        for(int i = 0; i < s.size(); i++){
        	if(s[i] == '1'){
        		s[i] = '0';
        	}
        	else{
        		s[i] = '1';
        	}
        }
        
        int ans = 0;
        //calculate the complement value
        for(int i = 0; i < s.size(); i++){
        	ans += int(s[i] - '0') * int(pow(2, i));
        }
        
        //return ans
        return ans;
    }
};

int main()
{
	int n; cin >> n;
	Solution sol;
	int ans = sol.bitwiseComplement(n);
	cout << ans << endl;
}