class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size()==0) return res;
        int row_start=0, row_end=matrix.size()-1, col_start=0, col_end=matrix[0].size()-1;
        
        while(row_start<=row_end && col_start<=col_end){    
            for(int i=col_start; i<=col_end; i++){
                res.push_back(matrix[row_start][i]);
            }
            row_start++;
            
            for(int i=row_start; i<=row_end; i++){
                res.push_back(matrix[i][col_end]);
            }
            col_end--;
            
            if(row_start<=row_end){
                for(int i=col_end; i>=col_start; i--){
                    res.push_back(matrix[row_end][i]);
                }
            }
            row_end--;
            
            if(col_start<=col_end){
                for(int i=row_end; i>=row_start; i--){
                    res.push_back(matrix[i][col_start]);
                }
            }
            col_start++;
        }
        return res;
    }
};