class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> temp(n);
        string s = temp.to_string();
        cout << s << endl;
        reverse(s.begin(), s.end());
        bitset<32> bs(s);
        uint32_t ans = bs.to_ulong();
        return ans;
    }
};
