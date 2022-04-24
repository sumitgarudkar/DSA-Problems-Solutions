class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> stationMap;
    unordered_map<string,pair<double,int>> routeMap;
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        stationMap[id] = {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string st = stationMap[id].first + "_" + stationName;
        routeMap[st].first += t - stationMap[id].second;
        routeMap[st].second +=1;
        stationMap.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string str = startStation+"_"+endStation;
        return routeMap[str].first/routeMap[str].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */