class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_val = nums[0];
        int current = 0;
        for(auto i : nums){
            current = max(current, 0);
            current += i;
            max_val = max(max_val, current);
        }
        return max_val;
    }
};
