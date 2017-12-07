/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        res = helper(nestedList);
    }

    int next() {
        pos++;
        return res[pos - 1];
    }

    bool hasNext() {
        
        return !res.empty() && res.size() - 1 >= pos;
    }
private:
    vector<int> res;
    int pos = 0;
    
    
    vector<int> helper(vector<NestedInteger> &nestedList) {
        vector<int> res;
        if (nestedList.empty()) return res;
        for (int i = 0; i < nestedList.size(); i++) {
            if (nestedList[i].isInteger()) {
                res.push_back(nestedList[i].getInteger());
            } else {
                vector<int> cur = helper(nestedList[i].getList());
                for (auto c : cur) {
                    res.push_back(c);
                }
            }
        }
        return res;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
