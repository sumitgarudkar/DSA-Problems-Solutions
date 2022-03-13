class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if(k==0) return nums[0];
        if(nums.size()==1){
            if(k>1 && (k%2)==0) return nums[0];
            else return -1;
        }
        int maxm=-1;
        if(k>nums.size()){
            for(int x:nums){
                if(x>maxm) maxm=x;
            }
        }
        if(k==nums.size()){
            for(int i=0; i<k-1; i++){
                if(nums[i]>maxm) maxm=nums[i];
            }
        }
        if(k<nums.size()){
            for(int i=0; i<=k; i++){
                if((i!=k-1) && nums[i]>maxm) maxm=nums[i];
            }
        }
        return maxm;
    }
};