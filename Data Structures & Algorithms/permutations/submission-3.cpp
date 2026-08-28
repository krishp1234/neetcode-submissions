class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        return permutations(nums, 0);
    }
    vector<vector<int>> permutations(vector<int> &nums, int i){
        if(i == nums.size()){
            return {{}};
        }

        vector<vector<int>> final;
        vector<vector<int>> current = permutations(nums, i + 1);

        for(auto n : current){
            for(int j = 0; j < n.size() + 1; ++j){
                vector<int> temp = n;
                temp.insert(temp.begin() + j, nums[i]);
                final.push_back(temp);
            }
        }
        return final;
    }
};
