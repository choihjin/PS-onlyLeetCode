class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(int i=0; i<operations.size(); i++) {
            if(operations[i] == "C") {
                if(!ans.empty()) ans.pop_back();
            } else if(operations[i] == "D") {
                if(!ans.empty()) ans.push_back(ans.at(ans.size()-1) * 2);
            } else if(operations[i] == "+") {
                if(ans.size() >= 2) {
                    int buffer = ans.at(ans.size()-1) + ans.at(ans.size()-2);
                    ans.push_back(buffer);
                }
            } else {
                ans.push_back(stoi(operations[i]));
            }
        }
        
        int result = 0;
        for(int i=0; i<ans.size(); i++) {
            result += ans[i];
        }
        
        return result;
    }
};