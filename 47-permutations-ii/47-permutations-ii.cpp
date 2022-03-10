class Solution {
set<vector<int>> res;
private: 
    void help(vector<int> &nums, int i, int n){
        if(i==n){
            res.insert(nums);
            return;
        }
        for(int j=i; j<nums.size(); j++){
            swap(nums[i],nums[j]);
            help(nums,i+1,n);
            swap(nums[i],nums[j]);
        }
    } 
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        help(nums,0,nums.size()-1);
        vector<vector<int>> ans;
        for(auto x:res) ans.push_back(x);
        return ans;
    }
};