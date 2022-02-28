class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size()==0) return res;
        for(int i=0; i<nums.size();){
            int start = i, end=i;
            while(end+1<nums.size() && nums[end+1]==nums[end]+1) end++;
            if(end>start) res.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
            else res.push_back(to_string(nums[end]));
            i=end+1;
        }
        return res;
    }
};