class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n =  obstacleGrid[0].size();
       for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(obstacleGrid[i][j] == 1) obstacleGrid[i][j]=-1;
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<"in";
               
                if(i==0 || j==0){
                    
                    if(obstacleGrid[i][j] == -1){
                          continue;
                    }
                    
                    if(i>0 && obstacleGrid[i-1][j] == -1){
                        obstacleGrid[i][j] = -1;
                         continue;
                    }
                    if(j>0 && obstacleGrid[i][j-1] == -1){
                        obstacleGrid[i][j] = -1;
                         continue;
                    }
                
                
                      
                    obstacleGrid[i][j] = 1;
                    continue;
                }
                 if(obstacleGrid[i][j] == -1) continue;
                else{
                    if(obstacleGrid[i][j-1] == -1 && obstacleGrid[i-1][j] == -1){
                        obstacleGrid[i][j] = -1;
                    }
                    else if(obstacleGrid[i][j-1] == -1){
                        obstacleGrid[i][j]= obstacleGrid[i-1][j];
                        
                    }
                    else if(obstacleGrid[i-1][j] == -1){
                        obstacleGrid[i][j]= obstacleGrid[i][j-1];
                        
                    }
                    else{
                         obstacleGrid[i][j]= obstacleGrid[i][j-1] + obstacleGrid[i-1][j];
                    }
                   
                }
            }
        }
        if(obstacleGrid[m-1][n-1] == -1){
            obstacleGrid[m-1][n-1]=0;
        }
        // cout<<obstacleGrid[0][0]<<endl<<m<<n;
        
        return obstacleGrid[m-1][n-1];
    }
};