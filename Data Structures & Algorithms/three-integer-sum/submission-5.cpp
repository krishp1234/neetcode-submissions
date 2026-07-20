class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> three;
        //-4, -1, -1, 0, 1, 2
        vector<vector<int>> threesum;

        for(int i = 0; i < nums.size(); ++i){
            for(int j = i + 1; j < nums.size(); ++j){
                for(int k = j + 1; k < nums.size(); ++k){
                    vector<int> twosum;
                    if((nums[i] + nums[j] + nums[k]) == 0){
                        twosum = {nums[i], nums[j], nums[k]};
                        sort(twosum.begin(), twosum.end());
                        three.insert(twosum);
                    }
                }
            }
        } 
        for(auto i : three){
            threesum.push_back(i);
        }
        return threesum;
    }
};
