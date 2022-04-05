class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1,area,maxarea=0;
        while(i<j){
            area=(min(height[i],height[j]))*(abs(j-i));
            maxarea=max(area,maxarea);
            if(height[i]>height[j]) j--;
            else i++;
        }
        return maxarea;
    }
};