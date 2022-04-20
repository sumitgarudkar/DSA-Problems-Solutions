class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        dp[0] = nums[0];
        int pick =0, notPick=0;
        for(int i=1; i<n; i++){
            if((i-2)>=0){
                pick = nums[i] + dp[i-2];
            } else{
                pick = nums[i];
            }
            notPick = dp[i-1];
            dp[i] = max(pick,notPick);
        }
        return dp[n-1];
    }
};