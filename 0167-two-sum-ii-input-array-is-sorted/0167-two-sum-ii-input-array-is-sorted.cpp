class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for(int i=0; i<numbers.size(); i++) {
            if(ans.size() != 0) break;
            if(i>0 && numbers[i] == numbers[i-1]) continue;
            for(int j=i+1; j<numbers.size(); j++) {
                if(numbers[i] + numbers[j] == target) {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }
            }
        }
        
        return ans;
    }
};