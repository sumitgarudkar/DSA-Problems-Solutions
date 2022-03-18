class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left(height.size());
        vector<int> right(height.size());
        left[0]=height[0];
        right[height.size()-1]=height[height.size()-1];
        int r=height.size()-2, l=1;
        while(l<=height.size()-1 && r>=0){
            left[l] = max(left[l-1],height[l]);
            right[r] = max(right[r+1],height[r]);
            l++;r--;
        }
        int res=0;
        for(int i=0; i<height.size(); i++){
            res+=min(left[i],right[i])-height[i];
        }
        return res;
    }
};