class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        //-4,-1,-1,0,1,2
        //-4,-1,-1,-1,0,1,1,2
        vector<vector<int>> threesum;
        for(int i = 0; i < nums.size(); ++i){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum > 0){
                    --right;
                }
                else if(sum < 0){
                    ++left;
                }
                else{
                    threesum.push_back({nums[i], nums[left], nums[right]});
                    --right;
                    while(left < right && nums[right] == nums[right + 1]){
                        --right;
                    }
                }

            }
        }
        return threesum;
    }
};
