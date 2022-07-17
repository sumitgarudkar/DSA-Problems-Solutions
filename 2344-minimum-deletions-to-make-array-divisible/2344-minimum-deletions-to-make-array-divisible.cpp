class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        map<int,int> mp;
        int res=0,n=nums.size();
        for(auto n:nums) mp[n]++;
        
        bool flag;
        for(auto m:mp){
            flag=true;
            for(auto n:numsDivide){
                if(n%m.first!=0){
                    res+=m.second;
                    flag=false;
                    break;
                }
            }
            if(flag) return res;
        }
        return -1;
    }
};