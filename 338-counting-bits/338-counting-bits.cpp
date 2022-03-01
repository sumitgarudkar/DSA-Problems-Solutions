class Solution {
private:
    int help(int n){
        int sum=0;
        while(n){
            if(n&1) sum+=1;
            n=n>>1;
        }
        return sum;
    }
    
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0; i<=n; i++){
            res.push_back(help(i));
        }
        return res;
    }
};