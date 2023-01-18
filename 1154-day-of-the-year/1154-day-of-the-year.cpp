class Solution {
public:
    bool isLeap(int n) {
        if(n % 4 == 0 && n % 100 != 0) return true;
        else if(n % 4 == 0 && n % 100 == 0 && n % 400 == 0) return true;
        else return false;
    }
    vector<string> split(string str, char Delimiter) {
        istringstream iss(str);
        string buffer;

        vector<string> result;

        while (getline(iss, buffer, Delimiter)) {
            result.push_back(buffer);
        }

        return result;
    }
    
    int dayOfYear(string date) {
        vector<string> s = split(date, '-');
        int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // add day
        int total = stoi(s[2]);
        cout << total << endl;
        
        // add month
        if(isLeap(stoi(s[0]))) {
            for(int i=stoi(s[1]); i>1; i--) {
                total += day2[i-2];
            }
        } else {
            for(int i=stoi(s[1]); i>1; i--) {
                total += day[i-2];
            }
        }
        cout << total << endl;
        
        return total;
    }
};