/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int res = 0;
        dfs(res, employees, id);
        return res;
    }
    
    void dfs(int& count, vector<Employee*> employees, int id) {
        for (int i = 0; i < employees.size(); i++) {
            if (employees[i]->id == id) {
                count += employees[i]->importance;
                for (int j = 0; j < employees[i]->subordinates.size(); j++) {
                    dfs(count, employees, employees[i]->subordinates[j]);
                }
                break;
            }
        }
    }
};
