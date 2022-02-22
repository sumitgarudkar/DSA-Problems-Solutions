class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1,k=nums.size()-1;
        vector<int> arr(nums.size());
        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                arr[k] = nums[i]*nums[i];
                k--;
                i++;
            }
            else{
                arr[k]=nums[j]*nums[j];
                k--;
                j--;
            }
        }
        return arr;
    }
};