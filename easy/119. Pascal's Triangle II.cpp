
#include<iostream>
#include<vector>
using namespace std;
 
class Solution {
public:
    vector<int> getRow(int rowIndex) {
    	vector<int> res;
    	int origin = 1;
    	int newNum;
        for (int i = 0; i <= rowIndex; i++) {
        	int len = res.size();
        	origin = 1;
        	for (int j = 0; j <= len; j++) {
        		if (j != 0 && j != len) {
        			newNum = res[j] + origin;
        			origin = res[j];
        			res[j] = newNum;
				}
				
				if (j == len) {
					res.push_back(1);
				}
			}
		}
		return res;
    }
};

int main() {
	Solution s;
	vector<int> a = s.getRow(21);
	for (auto aa : a) cout<<aa<<" ";
	return 0;
}
