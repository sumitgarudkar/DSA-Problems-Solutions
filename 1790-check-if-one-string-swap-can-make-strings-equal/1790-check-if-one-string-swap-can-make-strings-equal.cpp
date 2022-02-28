class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size()) return 0;
        if(s1==s2) return 1;
        map<char,int> mp;
        for(auto s:s1) mp[s]++;
        for(auto s:s2){
            if(mp[s]==1) mp.erase(s);
            else if(mp[s]>1) mp[s]--;
        }
        if(mp.size()!=0) return 0;
        int count = 0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]) count++;
            if(count>2) return 0;
        }
        return 1;
    }
};