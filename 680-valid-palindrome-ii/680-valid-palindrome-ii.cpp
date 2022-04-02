class Solution {
private:
    bool checkPalindrome(string s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]) return 0;
            i++;j--;
        }
        return 1;
    }
    
public:
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return (checkPalindrome(s,i,j-1) || checkPalindrome(s,i+1,j));
            }
            i++;j--;
        }
        return 1;
    }
};