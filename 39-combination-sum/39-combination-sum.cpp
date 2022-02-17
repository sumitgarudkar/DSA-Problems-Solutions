class Solution {
public:
    void help(vector<int> &seq, vector<vector<int>> &res, vector<int> arr, int k, int i){
        if(i>=arr.size()){
            if(k==0){
                res.push_back(seq);
            }
            return;
        }
        if(k>=arr[i]){
            seq.push_back(arr[i]);
            help(seq,res,arr,k-arr[i],i);
            seq.pop_back();
        }
        help(seq,res,arr,k,i+1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> seq;
        vector<vector<int>> res;
        help(seq,res,candidates,target,0);
        return res;
    }
};