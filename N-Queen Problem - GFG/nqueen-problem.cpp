// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> res;
    vector<vector<string>> ans;
    vector<string> board;
    vector<int> lRow;
    vector<int> upDia;
    vector<int> lowDia;
    
    void solve(int col, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(lRow[row]==0 && lowDia[col+row]==0 && upDia[col-row+n-1]==0){
                board[row][col]='Q';
                lRow[row]=1; lowDia[col+row]=1; upDia[col-row+n-1]=1;
                solve(col+1,n);
                board[row][col]='.';
                lRow[row]=0; lowDia[col+row]=0; upDia[col-row+n-1]=0;
            }
        }
    }

    vector<int> convert(vector<string> board){
        int n=board.size();
        vector<int> res(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]=='Q'){
                    res[j]=i+1;
                }
            }
        }
        return res;
    }

    vector<vector<int>> nQueen(int n) {
        // code here
        board.resize(n);
        string s(n,'.');
        for(int i=0; i<n; i++) board[i]=s;
        lRow.resize(n,0);
        upDia.resize(2*n+1,0);
        lowDia.resize(2*n+1,0);
        solve(0,n);
        for(auto i:ans){
            res.push_back(convert(i));
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends