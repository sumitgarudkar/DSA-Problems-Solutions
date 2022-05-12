class Solution {
public:
    set<vector<int>> ans;
    void solve(int i, int n, vector<int> &nums){
        if(i==n){
            ans.insert(nums);
            return;
        }
        
        for(int j=i; j<=n; j++){
            swap(nums[i],nums[j]);
            solve(i+1,n,nums);
            swap(nums[i],nums[j]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(0,nums.size()-1,nums);
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};