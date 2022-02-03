class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3){
            return res;
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<nums.size()-2; i++){
            if(i==0 ||(i>0&&nums[i]!=nums[i-1])){
                int l=i+1, r=nums.size()-1, sum=0-nums[i];
                while(l<r){
                    if(nums[l]+nums[r]==sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        res.push_back(temp);
                        
                        while(l<r && nums[l]==nums[l+1]) l++;
                        while(l<r && nums[r]==nums[r-1]) r--;
                        l++; r--;
                    }
                    else if((nums[l]+nums[r])<sum) l++;
                    else r--;
                }
            }
        }
        return res;
    }
};