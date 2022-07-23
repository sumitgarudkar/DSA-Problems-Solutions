class Solution {
    int help(int n, vector<int> &dp){
        if(n==2) return 2;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(help(n-1,dp)+help(n-2,dp));
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return help(n,dp);
    }
};