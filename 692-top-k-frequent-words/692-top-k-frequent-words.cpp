class Solution {
    
    static bool comp(pair<string,int> a, pair<string,int> b){
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    }
    
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        vector<string> res;
        for(auto x:words){
            mp[x]++;
        }
        vector<pair<string,int>> vec;
        for(auto m:mp) vec.push_back({m.first,m.second});
        sort(vec.begin(),vec.end(),comp);
        for(auto v:vec){
            if(!k) break;
            res.push_back(v.first);
            k--;
        }
        // sort(res.begin(),res.end());
        return res;
    }
};