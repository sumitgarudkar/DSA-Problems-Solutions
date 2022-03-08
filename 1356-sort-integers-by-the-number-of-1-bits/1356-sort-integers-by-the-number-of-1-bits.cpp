class Solution {
private:
    static int setbits(int p){
        int res=0;
        while(p){
            if(p&1) res+=1;
            p=p>>1;
        }
        return res;
    }
    
public:
    static bool compare(int a, int b){
        int p = setbits(a); int q = setbits(b);
        if(p==q) return a<b;
        else return p<q;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};