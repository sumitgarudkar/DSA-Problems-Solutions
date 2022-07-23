class Solution {
    int help(int n, vector<int> cost, vector<int> &dp){
        if(n==0) return cost[0];
        if(n==1) return cost[1];
        if(dp[n]!=-1) return dp[n];
        int one = cost[n]+help(n-1,cost,dp);
        int two = cost[n]+help(n-2,cost,dp);
        return dp[n]=min(one,two);
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return min(help(n-1,cost,dp),help(n-2,cost,dp));
    }
};