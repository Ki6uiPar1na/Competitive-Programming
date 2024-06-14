class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        s.push_back('/');
        char ch;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                return t[i];
            }
            else{
                ch = t[i];
            }
        }
        return ch;
    }

};
