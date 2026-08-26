class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> duplicates;
        for(auto i : nums){
            if(duplicates.contains(i)){
                return true;
            }
            duplicates.insert(i);
        }
        return false;
    }
};