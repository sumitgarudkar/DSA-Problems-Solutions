class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                return 1;
            }
            else if((nums[mid]==nums[e]) && (nums[mid]==nums[s])){
                e--;s++;
            }
            else if(nums[s]<=nums[mid]){
                if(target<nums[mid] && nums[s]<=target){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(target<=nums[e] && target>nums[mid]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return 0;
    }
};