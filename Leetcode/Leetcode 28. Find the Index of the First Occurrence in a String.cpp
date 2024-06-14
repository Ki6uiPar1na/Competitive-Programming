class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = -1;
        pos = haystack.find(needle);
        if(pos != string :: npos){
            return pos;
        }
        return pos;
    }
};
