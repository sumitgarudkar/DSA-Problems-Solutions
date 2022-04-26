// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    bool canMake(int a, int b, int c){
        if((a+b)>c && (a+c)>b && (b+c)>a){
            return 1;
        }
        return 0;
    }
    public:
    vector<int> canMakeTriangle(vector<int> arr, int N){
        // code here
        vector<int> res (N-2);
        for(int i=0; i<N-2; i++){
            if(canMake(arr[i],arr[i+1],arr[i+2])){
                res[i]=1;
            }
            else{
                res[i]=0;
            }
        }
        return res;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
            cin>>A[i];
        Solution ob;
        auto ans = ob.canMakeTriangle(A, N);
        for(int i=0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
        
    }

    return 0; 
}   // } Driver Code Ends