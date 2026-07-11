class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, vector<int>> frequency;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(frequency.contains(nums[i])){
                ++count;
            }
            frequency[nums[i]].push_back(nums[i]);
        }
        if(count >= 1){
            return true;
        }
        return false;
        
    }
};