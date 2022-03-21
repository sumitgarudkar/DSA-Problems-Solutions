class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> end_idx(26,0);
        for(int i=0; i<s.size(); i++){
            end_idx[s[i]-'a']=i;
        }
        vector<int> res;
        int start=0, end=0;
        for(int i=0; i<s.size(); i++){
            end=max(end,end_idx[s[i]-'a']);
            if(i==end){
                res.push_back(i+1-start);
                start = i+1;
            }
        }
        return res;
    }
};