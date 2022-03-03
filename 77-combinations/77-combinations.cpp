class Solution {
private:
    void helper(int n, int k, vector<int> &seq, vector<vector<int>> &res, int x){
        if(x>n){
            if(seq.size()==k){
                res.push_back(seq);
            }
            return;
        }
        if(seq.size()<k){
            seq.push_back(x);
            helper(n,k,seq,res,x+1);
            seq.pop_back();
        }
        helper(n,k,seq,res,x+1);
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> seq;
        helper(n,k,seq,res,1);
        return res;
    }
};