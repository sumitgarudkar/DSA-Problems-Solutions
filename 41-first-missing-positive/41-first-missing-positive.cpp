class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]>1){
            return 1;
        }
        int smallest=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                if(nums[i]==smallest) ++smallest;
            }
        }
        return smallest;
    }
};