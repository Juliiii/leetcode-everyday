class MapSum {
public:
    /** Initialize your data structure here. */
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        m[key] = val;
    }
    
    int sum(string prefix) {
        int res = 0;
        for (auto s : m) {
            bool flag = true;
            for (int i = 0; i < prefix.length(); i++) {
                if (prefix[i] != s.first[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) res += s.second;
        }
        
        return res;
    }
private:
    map<string, int> m;
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */
