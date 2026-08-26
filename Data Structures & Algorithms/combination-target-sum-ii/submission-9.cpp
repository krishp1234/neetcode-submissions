class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> combs;
        vector<int> current;
        backtracking(candidates, target, 0, combs, current);
        return combs;
    }
    void backtracking(vector<int> &candidates, int target, int i,
    vector<vector<int>> &combs, vector<int> &current){
        if(target == 0){
            combs.push_back(current);
            return;
        }
        if(target < 0 || i >= candidates.size()) return;
        
        current.push_back(candidates[i]);
        backtracking(candidates, target - candidates[i], i + 1, combs, current);

        current.pop_back();
        while(i + 1 < candidates.size() && candidates[i] == 
        candidates[i + 1]){
            ++i;
        }
        backtracking(candidates, target, i + 1, combs, current);

    }
};
