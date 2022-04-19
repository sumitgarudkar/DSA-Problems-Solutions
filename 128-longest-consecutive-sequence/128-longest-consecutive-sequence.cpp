class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int count=1,res=1;
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1) count+=1;
                else{
                    res=max(count,res);
                    count=1;  
                } 
            }
        }
        res=max(res,count);
        return res;
    }
};