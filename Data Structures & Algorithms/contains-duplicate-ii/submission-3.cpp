class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int, int> duplicates;
       for(int i = 0; i < nums.size(); ++i){
        if(duplicates.contains(nums[i]) && abs(duplicates[nums[i]] - i) <= k){
            return true;
            
        }
        /*if(duplicates.contains(nums[i]) && abs(duplicates[nums[i]] - i) > k){
            duplicates.erase(nums[i]);
        }*/
        //duplicates.insert({nums[i], i});
        duplicates[nums[i]] = i;
       } 
       return false;
    }
};