class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.size(); i++) {
            s[i] = tolower(s[i]);
            if(s[i] == ' ' || s[i] == ',' || s[i] == ':' || s[i] == '.' || s[i] == '@' || s[i] == '#' || s[i] == '_' || s[i] == '\'' || s[i] == '{' || s[i] == '}' || s[i] == '[' || s[i] == ']' || s[i] == '\\' || s[i] == '\"' || s[i] == '-' || s[i] == '?' || s[i] == '!' || s[i] == ';' || s[i] == '(' || s[i] == ')' || s[i] == '`' || s[i] == '~') {
                s.erase(i, 1);
                i--;
            }
        }
        
        for(int i=0; i<s.size(); i++) {
            cout << s[i] << "|" << s[s.size()-i-1] << endl;
            if(s[i] != s[s.size()-i-1]) return false;
        }
        return true;
    }
};