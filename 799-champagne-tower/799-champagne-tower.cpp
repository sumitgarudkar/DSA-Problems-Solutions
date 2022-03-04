class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> a(102,vector<double> (102));
        a[0][0] = poured;
        for(int i=0; i<query_row; i++){
            for(int j=0; j<=i; j++){
                double flow = (a[i][j]-1.0)/2.0;
                if(flow>0){
                    a[i+1][j]+=flow;
                    a[i+1][j+1]+=flow;
                }
            }
        }
        return ((a[query_row][query_glass]>1)? 1:a[query_row][query_glass]);
    }
};