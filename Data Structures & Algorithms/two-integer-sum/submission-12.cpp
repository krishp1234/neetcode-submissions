class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); ++i){
            int difference = target - nums[i];
            if(mp.contains(difference)){
                return {min(i, mp[difference]), max(i, mp[difference])};
            }
            mp.insert({nums[i], i});
        }
        
        




    }
    
};
