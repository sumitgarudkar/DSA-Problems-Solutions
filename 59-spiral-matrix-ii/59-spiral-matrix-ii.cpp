class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==1) return {{1}};
        vector<vector<int>> res (n,vector<int>(n,0));
        int rowBegin=0, rowEnd=n-1, colBegin=0, colEnd=n-1, count=1, end=n*n;
        while(count<=end){
            for(int i=colBegin; i<=colEnd; i++){
                res[rowBegin][i] = count++;
            }
            rowBegin+=1;
            for(int i=rowBegin; i<=rowEnd; i++){
                res[i][colEnd] = count++;
            }
            colEnd-=1;
            for(int i=colEnd; i>=colBegin; i--){
                res[rowEnd][i] = count++;
            }
            rowEnd-=1;
            for(int i=rowEnd; i>=rowBegin; i--){
                res[i][colBegin] = count++;
            }
            colBegin+=1;
        }
        return res;
    }
};