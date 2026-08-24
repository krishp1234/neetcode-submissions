class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> combs;
        vector<int> current;
        backtracking(nums, 0, combs, current);
        return combs;
    }
    void backtracking(vector<int> &nums, int i, 
    vector<vector<int>> &combs, vector<int> &current){
        if(i >= nums.size()){
            combs.push_back(current);
            return;
        }
        current.push_back(nums[i]);
        backtracking(nums, i + 1, combs, current);

        current.pop_back();
        backtracking(nums, i + 1, combs, current);
    }
};
