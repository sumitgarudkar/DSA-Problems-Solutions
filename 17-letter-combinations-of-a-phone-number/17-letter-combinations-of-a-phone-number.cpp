class Solution {
public:
    void solve(int idx, string digits, string &seq, vector<string> &res, map<char,string> mp){
        if(idx>=digits.size()){
            res.push_back(seq);
        } 
        char ch = digits[idx];
        string tmp = mp[ch];
        for(int i=0; i<tmp.size(); i++){
            seq+=tmp[i];
            solve(idx+1,digits,seq,res,mp);
            seq.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()<1) return{};
        map<char,string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string> res;
        string seq="";
        solve(0,digits,seq,res,mp);
        return res;
    }
};