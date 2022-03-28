class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size(), count=0;
        for(int i=0; i<n-1; i++){
            int shiftidx = i-count;
            if(nums[i]==nums[i+1] && (shiftidx%2)==0){
                count++;
            }
        }
        if((n-count)%2) return count+1;
        return count;
    }
};