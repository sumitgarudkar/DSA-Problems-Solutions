class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(auto i:nums) mp[i]++;
        
        for(auto m: mp){
            if(m.second>1 || mp.find(m.first-1)!=mp.end() || mp.find(m.first+1)!=mp.end()){
                continue;
            }
            else{
                res.push_back(m.first);
            }
        }
        return res;
    }
};