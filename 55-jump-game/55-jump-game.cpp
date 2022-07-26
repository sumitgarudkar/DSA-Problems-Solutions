class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),rechable=0;
        for(int i=0; i<n; i++){
            if(rechable<i) return 0;
            rechable = max(rechable,i+nums[i]);
        }
        return 1;
    }
};