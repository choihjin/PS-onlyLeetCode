class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss;
        ss.str(title);

        vector<string> v;
        string buffer;
        while(ss >> buffer) v.push_back(buffer);

        string result = "";
        for(int i=0; i<v.size(); i++) {
            if(v[i].size() <= 2) {
                for(int j=0; j<v[i].size(); j++) {
                    v[i][j] = tolower(v[i][j]);
                }
            } else {
                v[i][0] = toupper(v[i][0]);
                for(int j=1; j<v[i].size(); j++) {
                    v[i][j] = tolower(v[i][j]);
                }
            }

            if(i != v.size()-1) {
                result += v[i] + " ";
            } else {
                result += v[i];
            }
        }

        return result;
    }
};