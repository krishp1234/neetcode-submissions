class Solution {
public:
    int findMin(vector<int> &nums) {
        int min1 = nums[0];
        for(auto i : nums){
            min1 = min(min1, i);
        }
        return min1;
    }
};
