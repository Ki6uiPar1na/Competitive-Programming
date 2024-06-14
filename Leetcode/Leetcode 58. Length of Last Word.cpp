class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> vs;
        string temp;
        while(ss >> temp){
            vs.push_back(temp);
        }
        return vs[vs.size() - 1].size();
    }
};
