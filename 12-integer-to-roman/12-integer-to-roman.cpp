class Solution {
public:
    vector<string> sym {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    vector<int> value {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    
    string intToRoman(int num) {
        string res="";
        for(int i=0; num; i++){
            while(num>=value[i]){
                res+=sym[i];
                num-=value[i];
            }
        }
        return res;
    }
};