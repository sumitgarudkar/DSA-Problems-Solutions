class Solution {
    int help(int n, vector<int> &dp){
        if(n<=0) return 0;
        if(n==1 || n==2) return 1;
        if(dp[n]!=-1) return dp[n];
        int tmp = help(n-1,dp)+help(n-2,dp)+help(n-3,dp);
        return dp[n]=tmp;
    } 
    
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return help(n,dp);
    }
};