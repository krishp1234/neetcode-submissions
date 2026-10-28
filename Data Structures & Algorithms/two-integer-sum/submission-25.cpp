class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        for(int i = 0; i < nums.size(); ++i){
            int difference = target - nums[i];
            if(indices.contains(difference)){
                return {indices[difference], i};
            }
            indices.insert({nums[i], i});
        }
    }
};
