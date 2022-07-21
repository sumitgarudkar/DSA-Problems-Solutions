class Solution {
    static bool comp(pair<char,int> a, pair<char,int> b){
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    }
    
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto ch:s) mp[ch]++;
        vector<pair<char,int>> vec;
        for(auto m:mp) vec.push_back({m.first,m.second});
        sort(vec.begin(),vec.end(),comp);
        string res="";
        for(auto v:vec){
            string temp(v.second,v.first);
            res+=temp;
        }
        return res;
    }
};