class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res=0;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.count(k-nums[i])){
                res++;
                if(mp[k-nums[i]]<=1) mp.erase(k-nums[i]);
                else mp[k-nums[i]]--;
            }
            else{
                mp[nums[i]]++;
            }
        }
        return res;
    }
};