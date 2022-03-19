class FreqStack {
public:
    unordered_map<int,int> freq;
    unordered_map<int,stack<int>> mp;
    int maxfreq = 0;
    
    void push(int val) {
        maxfreq = max(maxfreq, ++freq[val]);
        mp[freq[val]].push(val);
    }
    
    int pop() {
        int topel = mp[maxfreq].top();
        mp[maxfreq].pop();
        if(!mp[freq[topel]--].size()) maxfreq--;
        return topel;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */