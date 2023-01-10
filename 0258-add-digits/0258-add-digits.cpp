class Solution {
public:
    int addDigits(int num) {
        string s;
        s = to_string(num);
        while(s.size() != 1) {
            num = 0;
            for(int i=0; i<s.size(); i++) {
                num += s[i]-48;
            }
            s = to_string(num);
        }
        return s[0]-48;
    }
};