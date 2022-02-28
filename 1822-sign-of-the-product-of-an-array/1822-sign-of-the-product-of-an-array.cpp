class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0;
        for(int x:nums){
            if(x==0) return 0;
            if(x<0) count++;
        }
        if(count%2) return -1;
        return 1;
    }
};