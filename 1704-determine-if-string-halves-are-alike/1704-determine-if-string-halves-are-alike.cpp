class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0, s.length()/2);
        string b = s.substr(s.length()/2);
        
        int a_count = 0, b_count = 0;
        for(int i=0; i<a.size(); i++) {
            a[i] = toupper(a[i]);
            b[i] = toupper(b[i]);
            if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
                a_count++;
            }
            if(b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U') {
                b_count++;
            }
        }

        if(a_count == b_count) return true;
        else return false;
    }
};