class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int n:nums){
            pq.push(n);
        }
        int i=0;
        while(!pq.empty()){
            nums[i++] = pq.top();
            pq.pop();
        }
        return nums;
    }
};