class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> current;
        vector<vector<int>> combs;
        backtracking(nums, target, 0, current, combs);
        return combs;
    }   
    void backtracking(vector<int> &nums, int target, int i, 
    vector<int> &current, vector<vector<int>> &combs){
        if(target == 0){
            combs.push_back(current);
            return;
        }
        if(i >= nums.size() || target < 0){
            return;
        }
        current.push_back(nums[i]);
        backtracking(nums, target - nums[i], i, current, combs);

        current.pop_back();
        backtracking(nums, target, i + 1, current, combs);
    }
    
};
