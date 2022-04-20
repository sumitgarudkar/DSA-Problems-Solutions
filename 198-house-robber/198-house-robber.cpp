class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& nums, int n){
        if(n<0) return 0;
        if(n==0) return dp[0]=nums[0];
        if(dp[n]!=-1) return dp[n];
        int pick = nums[n]+solve(nums,n-2);
        int notPick = solve(nums,n-1);
        return dp[n] = max(pick,notPick);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n+1,-1);
        return solve(nums,n-1);
    }
};