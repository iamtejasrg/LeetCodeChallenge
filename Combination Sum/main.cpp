class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,target, ans, 0, temp, 0);
        return ans;
        
    }
    void solve(vector<int>& candidates, int target,vector<vector<int>>& ans, int ind, vector<int> temp, int sum){
        if(sum == target){
            ans.push_back(temp);
            return;
        }
        if(ind == candidates.size()) return;
        
        if(sum<target){
            solve(candidates,target,ans,ind+1, temp, sum);
            temp.push_back(candidates[ind]);
            sum += candidates[ind];
            solve(candidates,target,ans,ind, temp, sum);
            
        }
        return;
        
    }
};