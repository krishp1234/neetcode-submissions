class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> f;
        int count = 0;
        for(auto i : nums){
            if(f.contains(i)){
                ++count;
            }
            f.insert({i});
        }
        if(count >= 1){
            return true;
        }
        return false;
        
    }
};