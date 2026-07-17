class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //1,2,3,4
        unordered_set<int> values(nums.begin(), nums.end());
        int longest = 0;
        for(auto i : values){
            int count = 0;
            if(!values.contains(i - 1)){
                //int count = 0;
                while(values.contains(i + count)){
                    ++count;
                }
                
            }
            longest = max(count, longest);
        }
        return longest;
    }
};
