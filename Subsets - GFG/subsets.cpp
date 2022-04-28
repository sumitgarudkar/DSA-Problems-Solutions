// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    vector<vector<int>> res;
    void solve(int idx, vector<int> &seq, vector<int>& arr){
        if(idx>=arr.size()){
            res.push_back(seq);
            return;
        }
        seq.push_back(arr[idx]);
        solve(idx+1,seq,arr);
        seq.pop_back();
        solve(idx+1,seq,arr);
    }
    public:
    vector<vector<int> > subsets(vector<int>& A){
        vector<int> seq;
        solve(0,seq,A);
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends