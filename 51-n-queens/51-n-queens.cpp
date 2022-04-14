class Solution {
    bool isSafe(int row, int col, int n, vector<string> board){
        int rowTemp = row, colTemp=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--; col--;
        }
        row = rowTemp; col=colTemp;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        col=colTemp;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++; col--;
        }
        return true;
    }
    
    void solve(int col, int n, vector<string> &board, vector<vector<string>> &res){
        if(col==n){
            res.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(row,col,n,board)){
                board[row][col] = 'Q';
                solve(col+1,n,board,res);
                board[row][col] = '.';
            }
        }
    }    
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n);
        string s (n,'.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        solve(0,n,board,res);
        return res;
    }
};