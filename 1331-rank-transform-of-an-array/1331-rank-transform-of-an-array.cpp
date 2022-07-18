class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> vec=arr;
        sort(vec.begin(),vec.end());
        int n=arr.size();
        map<int,int> mp;
        int i=1;
        for(auto x:vec){
            if(mp.count(x)){
                continue;
            }
            else{
                mp[x]=i;
                i++;
            }
        }
        for(int i=0; i<n; i++){
            vec[i]=mp[arr[i]];
        }
        return vec;
    }
};