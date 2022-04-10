class Solution {
    vector<vector<int>> res;
    void help(int idx, int k, int n, vector<int> &seq){
        if(n==0 && k==seq.size()){
            res.push_back(seq);
            return;
        }
        for(int i=idx; i<10; i++){
            seq.push_back(i);
            help(i+1,k,n-i,seq);
            seq.pop_back();
        }
    } 
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> seq;
        help(1,k,n,seq);
        return res;
    }
};