class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> duplicate;
        for(auto i : nums){
            if(duplicate.contains(i)){
                return true;
            }
            duplicate.insert({i});
        }
        return false;
        
    }
};