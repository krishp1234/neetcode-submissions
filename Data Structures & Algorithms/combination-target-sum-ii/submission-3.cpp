class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> current;
        vector<vector<int>> combs;
        backtracking(candidates, target, 0, current, combs);
        return combs;
    }
    void backtracking(vector<int> &candidates, int target, int i, 
    vector<int> &current, vector<vector<int>> &combs){
        if(target == 0){
            combs.push_back(current);
            return;
        }
        if(i >= candidates.size() || target < 0){
            return;
        }
        current.push_back(candidates[i]);
        backtracking(candidates, target - candidates[i], i + 1, 
        current, combs);

        current.pop_back();
        while(i + 1< candidates.size() && 
        candidates[i] == candidates[i + 1]){
            ++i;
        }
        backtracking(candidates, target, i + 1, 
            current, combs);
    }
};
