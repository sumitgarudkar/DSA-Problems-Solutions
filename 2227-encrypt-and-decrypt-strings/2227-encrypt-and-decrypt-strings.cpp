class Encrypter {
public:
    unordered_map<char,string> mp;
    vector<string> dict;
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        int n=keys.size();
        for(int idx=0; idx<n; idx++){
            mp[keys[idx]]=values[idx];
        }
        dict=dictionary;
    }
    
    string encrypt(string word1) {
        string res="";
        for(auto w:word1){
            res+=mp[w];
        }
        return res;
    }
    
    int decrypt(string word2) {
        int count=0;
        for(auto d:dict){
            if(encrypt(d)==word2) count+=1;
        }
        return count;
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */