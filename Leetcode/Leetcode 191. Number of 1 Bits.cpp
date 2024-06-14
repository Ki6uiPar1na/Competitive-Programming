class Solution {
public:
    int hammingWeight(int n) {
        int cn = 0;
        while(n != 0){
            if(!(1 ^ (n % 2))){
                cn++;
            }
            n /= 2;
        }
        return cn;
    }
};
