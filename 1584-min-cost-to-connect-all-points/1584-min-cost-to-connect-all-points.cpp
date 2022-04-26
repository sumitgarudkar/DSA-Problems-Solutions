class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size(), res=0, connection=0, i=0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<bool> visited(n);
        
        while(++connection<n){
            visited[i]=1;
            for(int j=0; j<n; j++){
                if(!visited[j]){
                    pq.push({abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]),j});
                }
            }
            while(visited[pq.top().second]){
                pq.pop();
            }
            res+=pq.top().first;
            i=pq.top().second;
            pq.pop();
        }
        return res;
    }
};