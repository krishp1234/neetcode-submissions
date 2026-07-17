class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        for(int i = 0; i < nums.size(); ++i){
            int difference = target - nums[i];
            if(sum.contains(difference)){
                return {min(sum[difference], i), max(sum[difference], i)};
            }
            sum[nums[i]] = i;
        }
        
        




    }
    
};
