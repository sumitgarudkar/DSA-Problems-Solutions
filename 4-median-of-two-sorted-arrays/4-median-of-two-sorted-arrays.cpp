class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int mn = nums1.size();
        if(mn%2){
            return (double)nums1[mn/2];
        }
        
        return double((nums1[mn/2]+nums1[(mn/2)-1])/2.0000);
    }
};