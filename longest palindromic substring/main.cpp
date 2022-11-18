
class Solution {
public:
    
    string longestPalindrome(string s) {
       int n = s.length();
        bool dp[1001][1001]={false};
    
        for(int i=0; i<n; i++) dp[i][i]=true;
        
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = true;
            }else{
                dp[i][i+1] = false;
            }
        }
        
        for(int d=2; d<n; d++){
            int i=0, j=d;
            while(j<n){
                if(s[i] == s[j] && dp[i+1][j-1]) dp[i][j] = true;
                else dp[i][j] = false;
                i++;j++;
            }
        }
        int start = 0;
        int len = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dp[i][j] && len<(j-i)+1){
                    len = (j-i)+1;
                    start = i;
                }
            }
        }
        
        return s.substr(start, len); 
        
    }
};