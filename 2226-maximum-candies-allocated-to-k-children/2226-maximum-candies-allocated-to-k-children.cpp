class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        if(n==1){
            if(candies[0]<k) return 0;
            else return candies[0]/k;
        }
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum+=candies[i];
        }
        long long l=0,r=sum/k,res=0;
        while(l<r){
            long long mid=(l+r+1)/2;
            long long count=0;
            for(int i=0; i<n; i++){
                count+=(candies[i]/mid);
            }
            if(count>=k){
                res=max(res,mid);
                l=mid;
            }
            else r=mid-1;
        }
        return res;
    }
};