class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> l1, l2;
        
        int min = INT_MAX;
        
        vector<string> res;
        
        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {
                if (list1[i] == list2[j]) {
                    int cur = i + j;
                    if (cur < min) {
                        min = cur;
                        res.clear();
                        res.push_back(list1[i]);
                    } else if (cur == min) {
                        res.push_back(list1[i]);
                    }
                }
            }
        }
        return res;
    }
};
