class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime;
        int result = 0;
        
        isPrime.push_back(false);
        isPrime.push_back(false);
        for (int i = 2; i < n; i++) {
            isPrime.push_back(true);
        }

        for (int i = 2; i * i < n; i++) {
            if (!isPrime[i]) continue;
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) result++;
        }

        return result;
    }
};