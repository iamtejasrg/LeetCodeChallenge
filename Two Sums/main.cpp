class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int f=0;
        for(int i=0; i<nums.size(); i++){
            auto it = std::find (nums.begin()+i+1, nums.end(), target-nums[i]);
            if (it != nums.end()) 
            { 
                ans.push_back(i);
                ans.push_back(it - nums.begin());
                f=1;
                
            } 
            
            if(f) break;
            
        }   
        return ans;
        
        
    }
};