class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        int res=0,n=nums.size();
        for(int i=0; i<n; i++){
            res+=((((i+1)*(n-i))+1)/2)*nums[i];
        }
        return res;
    }
};