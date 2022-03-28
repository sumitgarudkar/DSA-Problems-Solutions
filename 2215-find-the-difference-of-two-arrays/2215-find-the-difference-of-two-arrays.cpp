class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m1(nums1.begin(),nums1.end());
        unordered_set<int> m2(nums2.begin(),nums2.end());
        vector<vector<int>> res(2);
        for(int x:m1){
            if(m2.count(x)==0){
                res[0].push_back(x);
            }
        }
        for(int x:m2){
            if(m1.count(x)==0){
                res[1].push_back(x);
            }
        }
        return res;
    }
};