class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        vector<char> vs;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                vs.push_back(s[i]);
            }
        }
        reverse(vs.begin(), vs.end());
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                s[i] = vs[j];
                j++;
            }
        }
        return s;
    }
};
