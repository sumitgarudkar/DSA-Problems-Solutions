class Solution {
    int help(int n, vector<int> cost, vector<int> &dp){
        if(dp[n]!=-1) return dp[n];
        int one = cost[n]+help(n-1,cost,dp);
        int two = cost[n]+help(n-2,cost,dp);
        return dp[n]=min(one,two);
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        dp[0]=cost[0];dp[1]=cost[1];
        int x=min(help(n-1,cost,dp),help(n-2,cost,dp));
        return x;
    }
};