
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int idx=0; idx<s.size(); idx+=2*k){
            int i=idx, j=min(idx+k-1,(int)s.size()-1);
            while(i<j){
                swap(s[i++],s[j--]);
            }
        }
        return s;
    }
};