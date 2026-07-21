class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        //[-1,0,1,2,-1,-4]
        //[-4,-1,-1,0,1,2]
        //[-3, -3, -3, 2, 3, 4]
       vector<vector<int>> threesum;
       sort(nums.begin(), nums.end());
       for(int i = 0; i < nums.size(); ++i){
        if(i > 0 && nums[i - 1] == nums[i]){
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
                ++left;
                while(left < right && nums[left - 1] == nums[left]){
                    ++left;
                }
            }
        }
       }
       return threesum;
    }
};