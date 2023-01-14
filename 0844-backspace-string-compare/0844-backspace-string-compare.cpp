class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return(backspacing(s) == backspacing(t));
    }
    
    string backspacing(string s) {
        string ans;
        for(int i=0; i<s.size(); i++) {
            if(s[i] != '#') ans.push_back(s[i]);
            else if(!ans.empty()) ans.pop_back();
        }
        return ans;
    }
};