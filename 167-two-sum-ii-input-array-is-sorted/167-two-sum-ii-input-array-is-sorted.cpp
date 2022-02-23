class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;
        while((numbers[l]+numbers[r])!=target){
            int sum=numbers[l]+numbers[r];
            if(sum<target) l++;
            if(sum>target) r--;
        }
        return {l+1,r+1};
    }
};