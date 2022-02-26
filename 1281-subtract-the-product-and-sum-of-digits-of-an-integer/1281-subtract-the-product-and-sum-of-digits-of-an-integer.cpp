class Solution {
private:
    int sumof(int n){
        int res=0;
        while(n){
            res+=(n%10);
            n/=10;
        }
        return res;
    }
    
    int productof(int n){
        int res=1;
        while(n){
            res*=(n%10);
            n/=10;
        }
        return res;
    }
    
public:
    int subtractProductAndSum(int n) {
        return (productof(n)-sumof(n));
    }
};