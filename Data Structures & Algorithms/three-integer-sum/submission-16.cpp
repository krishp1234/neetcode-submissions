class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        //[-1,0,1,2,-1,-4]
        //[-3, -3, -3, 2, 3, 4]
        sort(nums.begin(), nums.end());
        vector<vector<int>> sum;

        for(int i = 0; i < nums.size(); ++i){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right){
                int three_sum = nums[i] + nums[left] + nums[right];
                if(three_sum < 0){
                    ++left;
                }
                else if(three_sum > 0){
                    --right;
                }
                else{
                    sum.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    while(left < right && nums[left] == nums[left - 1]){
                        ++left;
                    }
                }
            }
        }
        return sum;
    }
};