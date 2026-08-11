class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_val = nums[0];
        int current = 0;
        for(auto i : nums){
            current += i;
            max_val = max(max_val, current);
            current = max(current, 0);
        }
        return max_val;
    }
};
