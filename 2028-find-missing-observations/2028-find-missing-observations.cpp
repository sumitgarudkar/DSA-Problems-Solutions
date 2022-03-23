class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size(), add=0;
        for(int i=0; i<m; i++){
            add+=rolls[i];
        }
        int sum = (mean*(m+n))-add;
        if(sum>6*n || sum<n){
            return {};
        }
        int x = sum%n;
        vector<int> res(n,sum/n);
        for(int i=0; i<x; i++){
            res[i]+=1;
        }
        return res;
    }
};