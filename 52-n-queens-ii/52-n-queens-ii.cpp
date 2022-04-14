class Solution {
public:
    void solve(int col, int n, int &res, vector<string> &board, vector<int> &leftRow, vector<int> &lowDiagonal, vector<int> &upDiagonal){
        if(col==n){
            res+=1;
            return;
        }
        
        for(int row=0; row<n; row++){
            if(leftRow[row]==0 && lowDiagonal[row+col]==0 && upDiagonal[col-row+n-1]==0){
                board[row][col]='Q';
                leftRow[row]=1; lowDiagonal[row+col]=1; upDiagonal[col-row+n-1]=1;
                solve(col+1,n,res,board,leftRow,lowDiagonal,upDiagonal);
                board[row][col]='.';
                leftRow[row]=0; lowDiagonal[row+col]=0; upDiagonal[col-row+n-1]=0;
                
            }
        }
    }
    
    int totalNQueens(int n) {
       int res=0;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        vector<int> leftRow(n); vector<int> lowDiagonal(2*n-1); vector<int> upDiagonal(2*n-1);
        solve(0,n,res,board,leftRow,lowDiagonal,upDiagonal);
        return res;
    }
};