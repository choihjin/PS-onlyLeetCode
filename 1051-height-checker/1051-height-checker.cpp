class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> sorted = heights;
        
        sort(sorted.begin(), sorted.end());
        for(int i=0; i<sorted.size(); i++) {
            if(sorted[i] != heights[i]) count++;
        }
        
        return count;
    }
};