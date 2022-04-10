class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(auto op:ops){
            if(op=="+"){
                int top = s.top();
                s.pop();
                int newtop = top + s.top();
                s.push(top);
                s.push(newtop);
            }
            else if(op=="D"){
                s.push(2*s.top());
            }
            else if(op=="C"){
                s.pop();
            }
            else{
                s.push(stoi(op));
            }
        }
        int res=0;
        while(!s.empty()){
            res += s.top();s.pop();
        }
        return res;
    }
};