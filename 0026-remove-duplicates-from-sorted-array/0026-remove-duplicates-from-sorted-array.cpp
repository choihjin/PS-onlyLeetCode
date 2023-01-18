class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
            bool check = false;
            for(int j=0; j<i; j++) {
                if(nums[i] == nums[j]) {
                    check = true;
                    break;
                }
            }
            if(check) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        
        return nums.size();
    }
};