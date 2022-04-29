// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    vector<vector<int>> res;
    void dfs(int r, int c, int color, int newColor){
        if(res[r][c]==color){
            res[r][c]=newColor;
            if(r-1>=0) dfs(r-1,c,color,newColor);
            if(c-1>=0) dfs(r,c-1,color,newColor);
            if(r+1<res.size()) dfs(r+1,c,color,newColor);
            if(c+1<res[0].size()) dfs(r,c+1,color,newColor);
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, 
    int sr, int sc, int newColor) {
        // Code here 
        res = image;
        if(res[sr][sc]!=newColor)dfs(sr,sc,res[sr][sc],newColor);
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends