class Solution {
    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        for(int i=0; i<board.size(); i++){
            if(i!=col && board[row][i]==c) return false;
            if(i!=row && board[i][col]==c) return false;
            int rowT = 3*(row/3)+i/3, colT = 3*(col/3)+i%3;
            if(row!=rowT && col!=colT && board[rowT][colT]==c) return false;
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j]!='.'){
                    if(isValid(board,i,j,board[i][j])){
                        continue;
                    }
                    else return 0;
                }
            }
        }
        return 1;
    }
};