class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1] != 9) digits[digits.size()-1]++;
        else {
            for(int i=digits.size()-1; i>=0; i--) {
                if(i == digits.size()-1) digits[i]++;
                if(digits[i] > 9) {
                    digits[i] = 0;
                    if(i-1 >= 0) {
                        digits[i-1]++;
                    } else {
                        digits.insert(digits.begin(), 1);
                    }
                } else {
                    break;
                }
            }
        }
        return digits;
    }
};