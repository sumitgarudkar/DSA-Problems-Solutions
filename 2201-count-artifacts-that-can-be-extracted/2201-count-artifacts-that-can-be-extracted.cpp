class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<int>> hash (n,vector<int>(n,0));
        for(auto itr:dig){
            hash[itr[0]][itr[1]]=1;
        }
        int res=0;
         for(auto itr:artifacts){
             int x1=itr[0], y1=itr[1], x2=itr[2], y2=itr[3];
             bool flag = 1;
             for(int i=x1; i<=x2 && flag; i++){
                 for(int j=y1; j<=y2; j++){
                     if(hash[i][j]==0){
                         flag=0;
                         break;
                     }
                 }
             }
             res+=flag;
         }
        return res;
    }
};