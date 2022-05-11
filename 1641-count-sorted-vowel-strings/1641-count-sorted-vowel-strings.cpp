class Solution {
public:
    void solve(vector<vector<char>> &res, vector<char> &seq, vector<char> &vowels, int idx, int n){
        if(seq.size() == n){
            res.push_back(seq);
            return;
        }
        for(int i=idx; i<vowels.size(); i++){
            seq.push_back(vowels[i]);
            solve(res,seq,vowels,i,n);
            seq.pop_back();
        }
        return;
    }
    

    int countVowelStrings(int n) {
        vector<char> seq; vector<char> vowels{'a','e','i','o','u'}; vector<vector<char>> res;
        solve(res,seq,vowels,0,n);
        return res.size();
    }
};

