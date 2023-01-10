class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<vector<int>> count;
        vector<int> buffer;

        for(int i=0; i<nums.size(); i++) {
            bool check = false;
            for(int j=0; j<count.size(); j++) {
                if(count[j][0] == nums[i]) {
                    count[j][1]++;
                    check = true;
                    break;
                }
            }

            if(!check) {
                buffer.push_back(nums[i]);
                buffer.push_back(1);
                count.push_back(buffer);
                buffer.clear();
            }
        }

        for(int i=0; i<count.size(); i++) {
            if(count[i][1] == 1) return count[i][0];
        }

        return 0;
    }
};