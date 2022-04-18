class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int,int>> pq;
        unordered_map <int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto m:mp){
            pq.push({m.second,m.first});
        }
        while(pq.size()>0 && k>0){
            res.push_back(pq.top().second);
            pq.pop(); k--;
        }
        return res;
    }
};