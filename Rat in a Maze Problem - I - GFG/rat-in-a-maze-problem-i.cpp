// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    vector<string> res; vector<vector<int>> visited;
    void solve(int x, int y, int n, string &path, vector<vector<int>> &m){
        if(x==n-1 && y==n-1){
            res.push_back(path);
            return;
        }
        if(x+1<n && m[x+1][y]==1 && visited[x+1][y]==0){
            path+="D";
            visited[x+1][y]=1;
            solve(x+1,y,n,path,m);
            visited[x+1][y]=0;
            path.pop_back();
        }
        if(y-1>=0 && m[x][y-1]==1 && visited[x][y-1]==0){
            path+="L";
            visited[x][y-1]=1;
            solve(x,y-1,n,path,m);
            visited[x][y-1]=0;
            path.pop_back();
        }
        if(y+1<n && m[x][y+1]==1 && visited[x][y+1]==0){
            path+="R";
            visited[x][y+1]=1;
            solve(x,y+1,n,path,m);
            visited[x][y+1]=0;
            path.pop_back();
        }
        if(x-1>=0 && m[x-1][y]==1 && visited[x-1][y]==0){
            path+="U";
            visited[x-1][y]=1;
            solve(x-1,y,n,path,m);
            visited[x-1][y]=0;
            path.pop_back();
        }
    }
    
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        visited.resize(n,vector<int>(n,0));
        string path="";
        visited[0][0]=1;
        if(m[0][0]==1) solve(0,0,n,path,m);
        return res;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends