class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return solve(board,0, 0);
    }
    bool solve(vector<vector<char>>& board, int i, int j){
        
        if(i == 9) return true;
        
        if(j == 9) return solve(board, i+1, 0);
        
        if(board[i][j] != '.'){
            int num = board[i][j];
            board[i][j] = '.';
           
            if(can_place(num, board,i,j)){
                board[i][j] = num +48;
                bool can_solve_sudoku = solve(board, i, j+1);
                if(can_solve_sudoku) return true;
                return false;
            }else{
                board[i][j] = num+48;
                return false;
            }
            
        }else{
            return solve(board, i, j+1);
        }
    }
    
    bool can_place(int num, vector<vector<char>>& board, int i, int j){
        
        for(int k=0; k<9; k++){
            if(board[i][k] == num+ 48 || board[k][j] == num+ 48) return false;
        }
        int row = (i/3)*3;
        int col = (j/3)*3;
        
        for(int k = row; k<row+3; k++){
            for(int m=col; m<col+3; m++){
                if(board[k][m] == num+ 48) return false;
            }
        }
        return true;
        
    }
    
};