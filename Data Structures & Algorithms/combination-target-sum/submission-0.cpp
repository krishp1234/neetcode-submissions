class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> combs;
        int i = 0;
        vector<int> current;
        backtracking(combs, target, i, nums, current);
        return combs;
    }
    void backtracking(vector<vector<int>> &combs, int target, int i, 
    vector<int> &nums, vector<int> &current){
        if(target == 0){
            combs.push_back(current);
            return;
        }
        if(target < 0 || i >= nums.size()){
            return;
        }
        current.push_back(nums[i]);
        backtracking(combs, target - nums[i], i, nums, current);

        current.pop_back();
        backtracking(combs, target, i + 1, nums, current);
    }
};
