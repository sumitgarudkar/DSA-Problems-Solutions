class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i:nums1) mp[i]++;
        
        for(int i:nums2){
            if(mp.count(i)){
                if(mp[i]<=1) mp.erase(i);
                else mp[i]--;
                res.push_back(i);
            }
        }
        return res;
    }
};