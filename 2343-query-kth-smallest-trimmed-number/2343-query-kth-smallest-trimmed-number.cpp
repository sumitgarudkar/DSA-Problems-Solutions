class Solution {
public:    
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int n=nums.size(),m=queries.size();
        vector<int> res;
        for(int i=0; i<m; i++){
            vector<pair<string,int>> temp;
            for(int j=0; j<n; j++){
                if(queries[i][1]>=nums[j].size()){ 
                    temp.push_back({(nums[j]),j});
                }
                else{
                    temp.push_back( {(nums[j].substr( (nums[j].size()-queries[i][1]),queries[i][1]) ),j} );                  
                }
                //cout<<temp[j]<<" ";
            }
            //cout<<endl;
            
            sort(temp.begin(),temp.end());
            res.push_back(temp[queries[i][0]-1].second);
        }
        return res;
    }
};


//temp.push_back( stoi(nums[i].substr( (nums[i].size()-1-queries[i][1]),(nums[i].size()-1)) ));