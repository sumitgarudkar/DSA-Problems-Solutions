class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int> mp;
        for(char ch:t)mp[ch]++;
        for(char ch:s)mp[ch]--;
        
        for(auto m:mp){
            if(m.second==1){
                return m.first;
            }
        }
        return '0';
    }
};