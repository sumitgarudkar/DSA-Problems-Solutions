class Solution {
    int help(vector<int> nums){
        int n=nums.size();
        int prev=nums[0], prevPast=0;
        for(int i=1; i<n; i++){
            int pick = nums[i]+prevPast;
            int notPick = prev;
            prevPast = prev;
            prev=max(pick,notPick);
        }
        return prev;
    }
    
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n < 2){
            if(n) return nums[0];
            else return 0;
         }
        vector<int> first,second;
        for(int i=0; i<n; i++){
            if(i!=0) first.push_back(nums[i]);
            if(i!=n-1) second.push_back(nums[i]);
        }
        return max(help(first),help(second));
    }
};