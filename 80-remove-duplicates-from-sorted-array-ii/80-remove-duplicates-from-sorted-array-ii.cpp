class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        map<int,int> mp;
        for(int i:nums) mp[i]++;
        for(auto itr:mp){
            if(itr.second>=2){
                nums[idx++]=itr.first;
                nums[idx++]=itr.first;
            }
            else{
                nums[idx++]=itr.first;
            }
        }
        return idx;
    }
};