class Solution {
private:
    void help(int idx, vector<int> &seq, vector<int>nums, vector<vector<int>> &res){
        res.push_back(seq);
        int n=nums.size();
        for(int i=idx; i<nums.size(); i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            seq.push_back(nums[i]);
            help(i+1,seq,nums,res);
            seq.pop_back();
        }
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> seq;
        vector<vector<int>> res;
        help(0,seq,nums,res);
        return res;
    }
};