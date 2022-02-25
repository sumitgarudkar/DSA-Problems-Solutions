class Solution {
public:
    double average(vector<int>& salary) {
        int mn=INT_MAX, mx=INT_MIN;
        double sum=0;
        for(int x:salary){
            sum+=(double)x;
            mx=max(mx,x);
            mn=min(mn,x);
        }
        return (sum-mn-mx)/(salary.size()-2);
    }
};