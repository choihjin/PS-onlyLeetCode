class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) count++;
            else ans.push_back(nums[i]);
        }
        
        for(int i=0; i<count; i++) ans.push_back(0);
        
        for(int i=0; i<nums.size(); i++) nums[i] = ans[i];
    }
};