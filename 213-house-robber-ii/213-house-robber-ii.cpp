class Solution {
public:
    int robbingHouse(vector<int> &nums){
        int n=nums.size();
        int prev2=0, prev=nums[0];
        for(int i=1; i<n; i++){
            int take = nums[i];
            if(i>1) take+=prev2;
            int notTake = prev;
            int curi=max(take,notTake);
            prev2 =prev;
            prev = curi;
        }
        return prev;
    }
    
    
    int rob(vector<int>& nums) {
        int n=nums.size();
         if (n < 2){
            if(n) return nums[0];
            else return 0;
         }
        vector<int> tmp1;
        vector<int> tmp2;
        for(int i=0; i<n; i++){
            if(i!=0) tmp1.push_back(nums[i]);
            if(i!=n-1) tmp2.push_back(nums[i]);
        }
        return max(robbingHouse(tmp1),robbingHouse(tmp2));
    }
};