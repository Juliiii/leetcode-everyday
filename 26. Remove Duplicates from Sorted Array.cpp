#include<iostream>
#include<vector> 


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        int i;
        int origin;
        for (i = 0; i < len; i++) {
            origin = nums[i];
            while(i != len - 1 && nums[i] == nums[i+1]) {
                i++;
            }
            nums[count] = origin;
            count++;
        }
        
        nums.resize(count);
        return count;
    }
};

int main() {
	vector<int> a = {1,1};
	
	Solution s;
	int v = s.removeDuplicates(a);
	cout<<v<<endl;
	return 0;
}
