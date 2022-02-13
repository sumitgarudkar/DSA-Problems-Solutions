class Solution {
public:
    void helper(int idx, vector<int>& nums, vector<int>& seq, vector<vector<int>> &res){
        if(idx>=nums.size()){
            res.push_back(seq);
            return;
        }   
        seq.push_back(nums[idx]);
        helper(idx+1,nums,seq,res);
        seq.pop_back();
        helper(idx+1,nums,seq,res);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> seq;
        helper(0,nums,seq,res);
        return res;
    }
};