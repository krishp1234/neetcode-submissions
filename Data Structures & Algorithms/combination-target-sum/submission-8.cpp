class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> current;
        vector<vector<int>> final;
        backtrack(nums, target, 0, current, final);
        return final;
    }

    void backtrack(vector<int>& nums, int target, int i,
    vector<int>& current, vector<vector<int>>& final){
        if(target == 0){
            final.push_back(current);
            return;
        }
        if(target < 0 || i == nums.size()){
            return;
        }
        current.push_back(nums[i]);
        backtrack(nums, target - nums[i], i, current, final);
        current.pop_back();
        backtrack(nums, target, i + 1, current, final);
    }
};
