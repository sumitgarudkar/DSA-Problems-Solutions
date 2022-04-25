// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    static bool comp(pair<int,pair<int,int>> &a, pair<int,pair<int,int>> &b){
        if(a.first==b.first && a.second.first==b.second.first){
            return a.second.second < b.second.second;
        }
        else if(a.first==b.first){
            return a.second.first > b.second.first;
        }
        else{
            return a.first<b.first;
        }
    }
    public:
    void customSort (int phy[], int chem[], int math[], int N){
        vector<pair<int,pair<int,int>>> v;
        for(int i=0; i<N; i++){
            v.push_back({phy[i],{chem[i],math[i]}});
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0; i<N; i++){
            phy[i] = v[i].first;
            chem[i] = v[i].second.first;
            math[i] = v[i].second.second;
        }
    } 
};

// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int phy[n];
		int chem[n];
		int math[n];
		for (int i = 0; i < n; ++i)
			cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
		ob.customSort (phy, chem, math, n);
		for (int i = 0; i < n; ++i)
			cout << phy[i] << " " << chem[i] << " " << math[i] << endl; 
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends