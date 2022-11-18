class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> temp;
        for(int i:nums){
           if(temp.insert(i).second == false) { return true; }
        }
        return false;
    }
};