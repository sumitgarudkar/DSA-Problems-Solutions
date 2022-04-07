class Solution {
public:    
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==1) return stones[0];
        while(n>1){
            sort(stones.begin(),stones.end());
            if(stones[n-1]==stones[n-2]){
                stones.pop_back(); stones.pop_back();
                n-=2;
            }
            else if(stones[n-1]>stones[n-2]){
                stones[n-2]=stones[n-1]-stones[n-2];
                stones.pop_back();
                n-=1;
            }
        }
        if(n==0){
            return 0;
        }
        return stones[0];
    }
};