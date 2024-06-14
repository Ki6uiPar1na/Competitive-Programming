class Solution {
public:
    bool isPalindrome(string s) {
        stringstream ss(s);
        string ans;
        string temp;
        while(ss >> temp){
            ans += temp;
        }
        string finalString = "";
        for(int i = 0; i < ans.size(); i++){
            ans[i] = tolower(ans[i]);
        }
        for(int i = 0; i < ans.size(); i++){
            if((ans[i] > 'z' - 0 or ans[i] < 'a' - 0) and !(ans[i] - '0' >= 0 and ans[i] - '0' <= 9)){
                cout << ans[i] << ' ';
            }
            else{
                finalString += ans[i];
            }
        }
        temp = finalString;
        reverse(finalString.begin(), finalString.end());
        return(temp == finalString);
    }
};
