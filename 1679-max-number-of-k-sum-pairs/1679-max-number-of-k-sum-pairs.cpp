class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res=0;
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        while(l<r){
            if((nums[l]+nums[r])==k){
                res++;
                l++;
                r--;
            }
            else if((nums[l]+nums[r])<k) l++;
            else r--;
        }
        return res;
    }
};