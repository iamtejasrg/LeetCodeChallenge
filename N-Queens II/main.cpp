class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n);
        solve(ans, n, 0, temp);
            return ans.size();
        
    }
    void solve(vector<vector<string>>& ans, int n, int q, vector<string>& temp){
       
        for(int i = 0; i<n; i++){
            if(queen_can_place(q,i, ans, temp)){
                string s(i,'.');
                s+='Q';
                int t=(n-i-1);
                while(t--) s+= ".";
                temp[q]=s;
                if(q==n-1){
                    ans.push_back(temp);
                }else{
                    solve(ans, n, q+1, temp);
                }
               
            }
        }
    }
    
    bool queen_can_place(int q, int c,vector<vector<string>>& ans, vector<string>&  temp){
        for(int i=0; i<q; i++){
            int pos =temp[i].find('Q');
            if( c == pos || abs(i-q) == abs(pos-c)) return false;
        }
        return true;
    }
};