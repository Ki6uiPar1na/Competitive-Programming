class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp = s;
        int j = s.size() - 1;
        for(int i = 0; i < s.size(); i++){
            s[i] = temp[j];
            j--;
        }
    }
};
