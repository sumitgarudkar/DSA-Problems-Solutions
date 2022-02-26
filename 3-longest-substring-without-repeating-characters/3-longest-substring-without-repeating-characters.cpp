class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int res=0,st=0;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>=st){
                st = mp[s[i]]+1;
            }
            mp[s[i]]=i;
            res=max(res,(i-st+1));
        }
        return res;
    }
};