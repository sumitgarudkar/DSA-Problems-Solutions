class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size()<4){
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int tar = target-nums[i]-nums[j];
                int l=j+1,r=nums.size()-1;
                while(l<r){
                    int sum=nums[l]+nums[r];
                    if(sum<tar) l++;
                    else if(sum>tar) r--;
                    else{
                        vector<int> quad;
                        quad.push_back(nums[i]);
                        quad.push_back(nums[j]);
                        quad.push_back(nums[l]);
                        quad.push_back(nums[r]);
                        res.push_back(quad);
                        
                        while(l<r && nums[l]==quad[2]) ++l;
                        while(l<r && nums[r]==quad[3]) --r;
                    }  
                }
                while(j+1<nums.size() && nums[j]==nums[j+1]) j++;  
            }
            while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        }
       return res; 
    }
};