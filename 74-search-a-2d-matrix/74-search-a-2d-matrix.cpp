class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        int i=0, j=m-1;
        while(i<n && j>=0){
            cout<<matrix[i][j]<<" ";
            if(matrix[i][j]<target) i++;
            else if(matrix[i][j]>target) j--;
            else return 1;
        }
        return 0;
    }
};