class Solution {
public:
    bool isPerfectSquare(int num) {
        bool result = false;
        for(long long i=0; i<=num; i++) {
            if(i * i == num) {
                result = true;
                break;
            } else if(i * i > num) {
                break;
            }
        }
        return result;
    }
};