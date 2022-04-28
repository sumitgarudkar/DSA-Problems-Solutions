// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    set<vector<int>> ans;
    void solve(int k, int idx, vector<int>& seq, vector<int> A){
        if(idx>=A.size()){
            if(k==0) ans.insert(seq);
            return;
        }
        if(k>=A[idx]){
            seq.push_back(A[idx]);
            solve(k-A[idx],idx,seq,A);
            seq.pop_back();
        }
        solve(k,idx+1,seq,A);
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        vector<int> seq;
        solve(B,0,seq,A);
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
        
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends