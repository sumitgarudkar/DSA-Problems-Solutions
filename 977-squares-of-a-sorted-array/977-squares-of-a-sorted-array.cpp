class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int i=0,j=arr.size()-1,k=arr.size()-1;
        vector<int> res(arr.size());
        while(i<=j){
            if((arr[j]*arr[j])>arr[i]*arr[i]){
                res[k]=arr[j]*arr[j];
                k--;
                j--;
            }
            else{
                res[k]=arr[i]*arr[i];
                i++;
                k--;
            }
        }
        return res;
    }
};