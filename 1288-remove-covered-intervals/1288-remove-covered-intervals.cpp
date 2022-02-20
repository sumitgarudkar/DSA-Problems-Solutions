class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        else return a[0]<b[0];
    }
    
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),comp);
        int count=0;
        int x=arr[0][0];
        int y=arr[0][1];
        for(int i=1; i<arr.size(); i++){
            if(arr[i][0]>=x and arr[i][1]<=y){
                count++;
            }
            else{
                x=arr[i][0];
                y=arr[i][1];
            }
        }
        
        return (arr.size()-count);
    }
};