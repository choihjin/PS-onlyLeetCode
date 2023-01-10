class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left; i<=right; i++) {
            string buffer = to_string(i);

            bool check = true;
            for(int j=0; j<buffer.size(); j++) {
                if(buffer[j]-48 != 0 && i % (buffer[j]-48) != 0) check = false;
                else if(buffer[j]-48 == 0) check = false;
            }

            if(check) v.push_back(i);
        }
        return v;
    }
};