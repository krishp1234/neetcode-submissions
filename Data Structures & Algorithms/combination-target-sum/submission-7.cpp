class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> combs;
        vector<int> current;
        backtracking(nums, target, 0, combs, current);
        return combs;
    }
    void backtracking(vector<int>& nums, int target, int i,
    vector<vector<int>> &combs, vector<int> &current){
        if(target == 0){
            combs.push_back(current);
            return;
        }
        if(i >= nums.size() || target < 0){
            return;
        }
        current.push_back(nums[i]);
        backtracking(nums, target - nums[i], i, combs, current);

        current.pop_back();
        backtracking(nums, target, i + 1, combs, current);
    }
};
