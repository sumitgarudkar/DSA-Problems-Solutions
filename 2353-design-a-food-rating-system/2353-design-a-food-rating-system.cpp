class FoodRatings {
public:
    map<string,set<pair<int,string>>> all;
    unordered_map<string,string> foodC;
    unordered_map<string,int> foodR;
    
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n=cuisines.size();
        for(int i=0; i<n; i++){
            all[cuisines[i]].insert({-ratings[i],foods[i]});
            foodC[foods[i]]=cuisines[i];
            foodR[foods[i]]=-ratings[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = foodC[food];
        int rating = foodR[food];
        all[cuisine].erase({rating,food});
        all[cuisine].insert({-newRating,food});
        foodR[food]=-newRating;
    }
    
    string highestRated(string cuisine) {
        auto p = *(all[cuisine].begin());
        return p.second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */