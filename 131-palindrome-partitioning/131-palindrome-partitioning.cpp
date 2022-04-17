class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    
    void help(int idx, string &s, vector<string> &temp, vector<vector<string>> &res){
        if(idx==s.size()){
            res.push_back(temp);
            return;
        }
        for(int i=idx; i<s.size(); i++){
            if(isPalindrome(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                help(i+1,s,temp,res);
                temp.pop_back();
            }
        }
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        help(0,s,temp,res);
        return res;
    }
};