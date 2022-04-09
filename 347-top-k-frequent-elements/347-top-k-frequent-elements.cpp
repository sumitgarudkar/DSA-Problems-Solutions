class Solution {
private:
    static bool comp(pair<int,int> &a,pair<int,int> &b){
        return a.second>b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        vector<pair<int,int>> vec;
        map<int,int> mp;
        for(int i:nums)mp[i]++;
        for(auto it: mp){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(), vec.end(),comp);
        for(int i=0; i<vec.size(); i++){
            if(k--){
                res.push_back(vec[i].first);
            }
            else{
                break;
            }
        }
        return res;
    }
};