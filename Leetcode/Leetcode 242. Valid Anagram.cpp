class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int pos = s.find(t);
        if((pos != -1 or s == t) and (s.size() == t.size())){
            return true;
        }
        return false;
    }
};
