class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> twosum;

        for(int i = 0; i < nums.size(); ++i){
            int difference = target - nums[i];
            if(twosum.contains(difference)){
                return {twosum[difference], i};
            }
            twosum.insert({nums[i], i});
        }

    }
};
