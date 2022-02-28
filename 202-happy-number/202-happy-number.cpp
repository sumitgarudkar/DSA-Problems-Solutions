class Solution {
public:
    int sqsum(int n){
        int res=0;
        while(n){
            res+=pow((n%10),2);
            n/=10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        set<int> st;
        while(n!=1 && !st.count(n)){
            st.insert(n);
            n=sqsum(n);
        }
        return n==1;
    }
};