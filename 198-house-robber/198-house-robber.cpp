class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0], pastPrev=0;
        for(int i=1; i<n; i++){
            int take = nums[i]+pastPrev;
            int notTake = prev;
            pastPrev=prev;
            prev=max(take,notTake);
        }
        return prev;
    }
};