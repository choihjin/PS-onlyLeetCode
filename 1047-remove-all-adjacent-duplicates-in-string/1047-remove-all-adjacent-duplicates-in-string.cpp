class Solution {
public:
    string removeDuplicates(string s) {
        string buffer = "";
        buffer.push_back(s[0]);
        
        for(int i=1; i<s.size(); i++) {
            if(s[i] == buffer.back()) buffer.pop_back();
            else buffer.push_back(s[i]);
        }
        
        return buffer;
    }
};