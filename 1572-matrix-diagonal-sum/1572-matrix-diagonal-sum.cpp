class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        int res=0;
        for(int i=0; i<nums.size(); i++){
            if(i!=nums.size()-1-i) res+=nums[i][i]+nums[i][nums.size()-i-1];
            else res+=nums[i][i];
        }
        return res;
    }
};