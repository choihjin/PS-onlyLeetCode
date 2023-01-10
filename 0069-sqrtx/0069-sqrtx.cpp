class Solution {
public:
    int mySqrt(int x) {
        long long result = 0;
        for(long long i=0; i<=x; i++) {
            if(i * i <= x) result = i;
            else break;

        }
        return result;
    }
};