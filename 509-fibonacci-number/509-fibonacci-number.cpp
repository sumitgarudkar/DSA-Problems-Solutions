class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        int last2=0, last=1;
        for(int i=2; i<=n; i++){
            int curr = last2 + last;
            last2 = last;
            last = curr;
        }
        return last;
    }
};