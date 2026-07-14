class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        for(int i = 0; i < nums.size(); ++i){
            int difference = target - nums[i];
            if(sum.contains(difference)){
                return {min(i, sum[difference]), max(i, sum[difference])};
            }
            sum.insert({nums[i], i});
        }
        
        




    }
    
};
