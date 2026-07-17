class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> values;
        int longest = 0;
        for(auto i : nums){
            values.insert(i);
        }
        for(auto i : nums){
            if(!values.contains(i - 1)){
                int count = 0;
                while(values.contains(i + count)){
                    ++count;
                }
                longest = max(count, longest);
            }
        }
        return longest;
    }
};
