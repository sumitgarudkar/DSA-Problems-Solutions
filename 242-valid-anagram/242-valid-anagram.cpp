class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> st(26,0); vector<int> tt(26,0);
        for(auto x:s) st[x-'a']++; for(auto x:t) tt[x-'a']++;
        return st==tt;
    }
};