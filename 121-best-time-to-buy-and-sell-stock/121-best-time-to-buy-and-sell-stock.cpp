class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int msum=0,csum=0;
        for(int i=1; i<prices.size(); i++){
            csum+=(prices[i]-prices[i-1]);
            if(csum<0) csum=0;
            msum=max(csum,msum);
        }
        return msum;
    }
};