class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        for(int n:nums){
            if(idx<2|| n>nums[idx-2]){
                nums[idx++]=n;
            }
        }
        return idx;
    }
};