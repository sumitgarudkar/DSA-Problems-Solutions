class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
        int y = (arr[1][1]-arr[0][1]);
        int x = (arr[1][0]-arr[0][0]);
        for(int i=2; i<arr.size(); i++){
            if((arr[i][1]-arr[i-1][1])*x != (arr[i][0]-arr[i-1][0])*y) return 0;
        }
        return 1;
    }
};