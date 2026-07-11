class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequency;
        int count = 0;
        for(auto i : nums){
            if(frequency.contains(i)){
                ++count;
            }
            frequency.insert({i, i});
        }
        if(count >= 1){
            return true;
        }
        return false;
        
    }
};