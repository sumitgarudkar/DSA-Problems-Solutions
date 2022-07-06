class Solution {
public:
    void dfs(vector<vector<char>> &grid, int i, int j){
        if(i>grid.size()-1 || j>grid[0].size()-1 || i<0 || j<0 || grid[i][j]!='1') return;
            grid[i][j] = '*';
            dfs(grid,i+1,j);
            dfs(grid,i-1,j);
            dfs(grid,i,j+1);
            dfs(grid,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int sum=0, m=grid.size(), n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    ++sum;
                    dfs(grid,i,j);
                }
            }
        }
        return sum;
    }
};