class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> st;
        for(auto n:nums){
            if(n>0) st.insert(n);
        }
        return st.size();
    }
};