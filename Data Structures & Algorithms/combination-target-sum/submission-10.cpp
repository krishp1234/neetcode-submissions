class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> final;
        vector<int> current;
        backtrack(nums, target, 0, final, current);
        return final;
    }
    void backtrack(vector<int>& nums, int target, int i, 
    vector<vector<int>>& final, vector<int>& current){
        if(target == 0){
            final.push_back(current);
            return;
        }
        if(target < 0 || i >= nums.size()){
            return;
        }
        
        
        current.push_back(nums[i]);
        backtrack(nums, target - nums[i], i, final, current);
        current.pop_back();
        backtrack(nums, target, i + 1, final, current);

    }
};
