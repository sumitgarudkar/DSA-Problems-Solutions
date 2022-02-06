class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0) return 0;
        int m=matrix.size(), n=matrix[0].size();
        int s=0,e=(n*m)-1;
        while(s<=e){
            int mid=s +(e-s)/2;
            int midele=matrix[mid/n][mid%n];
            if(target<midele) e=mid-1;
            else if(target>midele) s=mid+1;
            else return 1;
        }
        return 0;
    }
};