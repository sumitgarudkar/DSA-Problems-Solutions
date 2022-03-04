class Solution {
vector<vector<int>> res;
private: 
    void help(vector<int> &nums, int i, int n){
        if(i==n){
            res.push_back(nums);
            return;
        }
        for(int j=i; j<nums.size(); j++){
            swap(nums[i],nums[j]);
            help(nums,i+1,n);
            swap(nums[i],nums[j]);
        }
    } 
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        help(nums,0,nums.size()-1);
        return res;
    }
};