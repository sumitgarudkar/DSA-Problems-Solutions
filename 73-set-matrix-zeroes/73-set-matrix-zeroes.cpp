class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<pair<int,int>> zeros;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    zeros.push_back({i,j});
                }
            }
        }
        // for(auto z:zeros){
        //     cout<<z.first<<" "<<z.second<<endl;
        // }
        for(auto z:zeros){
            int row = z.first, col = z.second;
            for(int i=0; i<m; i++){
                matrix[i][col]=0;
            }
            for(int i=0; i<n; i++){
                matrix[row][i]=0;
            }
        }
    }
};