class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1, -1};
        if(!binary_search(nums.begin(), nums.end(), target)) return ans;
        ans[0] = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        ans[1] = upper_bound(nums.begin(), nums.end(), target) - nums.begin() -1;
        return ans;
    }
};