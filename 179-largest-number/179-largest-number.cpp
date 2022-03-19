class Solution {
public:
    static bool comp(int a, int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        string res;
        for(int i=0; i<nums.size(); i++){
         res+=to_string(nums[i]);   
        }
        return res[0]=='0'?"0":res;
    }
};