class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        ans.insert(ans.end(), nums1.begin(), nums1.begin()+m);
        ans.insert(ans.end(), nums2.begin(), nums2.begin()+n);
        
        sort(ans.begin(), ans.end());
        
        nums1 = ans;
    }
};