class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,mx=-1,n=nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum<nums[i]){
                sum=nums[i];
            }
            mx=max(mx,sum);
        }
        sum=0; int mxx=-1;
        for(int i=0; i<n; i++){
            sum+=(-1*nums[i]);
            if(sum<(-1*nums[i])){
                sum=(-1*nums[i]);
            }
            mxx=max(mxx,sum);
        }
        return max(mx,mxx);
    }
};