class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n > 0) {
            while(n > 1) {
                if(n % 4 == 0) n /= 4;
                else return false;
            }
        } else if(n < 0){
            while(n < 1) {
                if(n % 4 == 0) n /= 4;
                else return false;
            }
        } else return false;
        return true;
    }
};