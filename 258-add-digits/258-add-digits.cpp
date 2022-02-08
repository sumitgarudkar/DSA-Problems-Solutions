class Solution {
public:
    int add(int num){
        int res=0;
        while(num){
            res+=num%10;
            num/=10;
        }
        return res;
    }
    
    int addDigits(int num) {
        while(num>=10){
            num=add(num);
        }
        return num;
    }
};