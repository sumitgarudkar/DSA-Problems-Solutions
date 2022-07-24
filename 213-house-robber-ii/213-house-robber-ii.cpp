class Solution {
    int help(int n, vector<int> &nums, vector<int> &dp){
        if(n==0) return nums[0];
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int pick=nums[n]+help(n-2,nums,dp);
        int notPick=help(n-1,nums,dp);
        return dp[n]=max(pick,notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return nums[0];
        vector<int> dp(n+1,-1);
        vector<int> first,second;
        for(int i=0; i<n; i++){
            if(i!=0) first.push_back(nums[i]);
            if(i!=n-1) second.push_back(nums[i]);
        }
        int one = help(n-2,first,dp);
        for(int i=0; i<n+1; i++) dp[i]=-1;
        int two = help(n-2,second,dp);
        return max(one,two);
    }
};