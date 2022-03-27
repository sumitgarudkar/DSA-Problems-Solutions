class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size(), m=mat[0].size();
        vector<int> sol;
        vector<int> res;
        for(int i=0; i<n; i++){
            int count=0;
            int s=0, e=m-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(mat[i][mid]==0){
                    e=mid-1;
                }
                if(mat[i][mid]==1){
                    s=mid+1;
                }
            }
            sol.push_back(s);
        }
        multimap<int,int> mp;
        int y=sol.size();
        for(int i=0; i<y; i++){
            mp.insert({sol[i],i});
        }
        for(auto t:mp){
            if(!k) break;
            else{
                res.push_back(t.second);
                k--;
            }
        }
        return res;
    }
};