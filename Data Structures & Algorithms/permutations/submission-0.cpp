class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        return permutation(nums, 0);
    }
    //2,3 3,2
    vector<vector<int>> permutation(vector<int> &nums, int i){
        if(i == nums.size()){
            return {{}};
        }
        vector<vector<int>> final;
        vector<vector<int>> current = permutation(nums, i + 1);

        for(auto k : current){
            for(int j = 0; j < k.size() + 1; ++j){
                vector<int> temp = k;
                temp.insert(temp.begin() + j, nums[i]);
                final.push_back(temp);
            }
        }
        return final;
    }
};
