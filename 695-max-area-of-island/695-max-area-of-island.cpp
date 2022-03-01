class Solution {
private:    
    int area(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& seen){
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || seen[r][c] || grid[r][c]==0) return 0;
        seen[r][c]=1;
        return(1+area(r+1,c,grid,seen)+area(r-1,c,grid,seen)+area(r,c+1,grid,seen)+area(r,c-1,grid,seen));
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> seen(grid.size(),vector<bool> (grid[0].size()));
        int res=0;
        for(int r=0; r<grid.size(); r++){
            for(int c=0; c<grid[0].size(); c++){
                res= std::max(res,area(r,c,grid,seen));
            }
        }
        return res;
    }
};