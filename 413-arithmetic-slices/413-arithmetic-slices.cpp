class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int idx=0,diff=nums[1]-nums[0],res=0;
        for(int i=1; i<nums.size()-1; i++){
            int cdiff=nums[i+1]-nums[i];
            if(diff==cdiff) idx++;
            else{
                idx=0;
                diff=cdiff;
            }
            res+=idx;
        }
        return res;
    }
};