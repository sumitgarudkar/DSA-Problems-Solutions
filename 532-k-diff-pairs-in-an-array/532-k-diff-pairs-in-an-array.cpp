class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        unordered_map<int,int> mp;
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            if(mp.count(nums[i]-k)){
                st.insert(nums[i]-k);
            }
            if(mp.count(nums[i]+k)){
                st.insert(nums[i]);
            }
            mp[nums[i]]++;
        }
        for(auto s:st){
            cout<<s<<endl;
        }
        return st.size();
    }
};