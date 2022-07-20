class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> res;
        int n=groupSizes.size();
        for(int i=0; i<n; i++) mp[groupSizes[i]].push_back(i);
        
        for(auto m:mp){
            if(m.first==m.second.size()){
                res.push_back(m.second);
            }
            else{
                int size=m.first; vector<int> vec=m.second;
                n=vec.size(); vector<int> temp;
                for(int i=0; i<n; i++){
                    if(size==1){
                        temp.push_back(vec[i]);
                        res.push_back(temp);
                        temp.clear();
                        size=m.first;
                    }
                    else{
                        size--;
                        temp.push_back(vec[i]);
                    }
                }
            }
        }
        return res;
    }
};