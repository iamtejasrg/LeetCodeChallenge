class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        solve("", n, 0, 0, ans);
        
        return ans;
        
    }
    void solve(string temp, int n, int left, int right, vector<string>& ans){
        if(temp.length() == 2*n){
            ans.push_back(temp);
            return;
        }
        if(left<n){
            solve(temp+'(', n, left+1, right, ans);
        }
        if(right<left){
            temp+= ')';
            solve(temp, n, left, right+1, ans);
        }
        
    }
};