class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        unordered_map<int,int> ms1;
        unordered_map<int,int> ms2;
        int i=0,j=0;
        while(i<s1.size()){
            ms1[s1[i]]++;
            ms2[s2[i]]++;
            i++;
        }
        i--;
        while(i<s2.size()){
            if(ms1==ms2){
                return true;
            }
            i++;
            ms2[s2[i]]++;
            if(ms2[s2[j]]==1){
                ms2.erase(s2[j]);
            }
            else{
                ms2[s2[j]]--;
            }
            j++;
        }
        return false;
    }
};