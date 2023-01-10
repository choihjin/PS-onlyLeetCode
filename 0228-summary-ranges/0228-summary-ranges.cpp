class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)return {};
        if(nums.size()==1)return {to_string(nums[0])};
        vector<string> v;
        string buffer;
        buffer = to_string(nums[0]);

        int begin = nums[0];
        int end = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1]+1) {
                end = nums[i];
                cout << end << endl;
                if(i == nums.size()-1) {
                    buffer = to_string(begin) + "->" + to_string(end);
                    v.push_back(buffer);
                }
            }
            else {
                if(end == 0) buffer = to_string(begin);
                else buffer = to_string(begin) + "->" + to_string(end);
                v.push_back(buffer);
                begin = nums[i];
                end = 0;
                if(i == nums.size()-1) {
                    buffer = to_string(begin);
                    v.push_back(buffer);
                }
            }
        }
        return v;
    }
};