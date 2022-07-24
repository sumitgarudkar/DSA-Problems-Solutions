class Solution {
    int help(int i, vector<int> &nums, vector<int> &dp){
        if(i==0) return nums[i];
        if(i<0) return 0;
        if(dp[i]!=-1)return dp[i];
        int left = nums[i]+help(i-2,nums,dp);
        int right = help(i-1,nums,dp);
        return dp[i]=max(left,right);
    }
    
    
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return help(n-1,nums,dp);
    }
};