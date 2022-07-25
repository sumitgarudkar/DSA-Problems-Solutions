class Solution {
    int help(int n, vector<int>& nums, vector<int>& dp){
        if(n>=nums.size()-1) return 1;
        if(dp[n]!=-1) return dp[n];
        if(nums[n]==0) return dp[n]=0;
        for(int m=1; m<=nums[n]; m++){
            if(help(n+m,nums,dp)) return dp[n]=1;
        }
        return dp[n]=0;
    }
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return help(0,nums,dp);
    }
};