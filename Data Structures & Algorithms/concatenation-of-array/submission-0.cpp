class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer(nums.begin(), nums.end());
        for(auto i : nums){
            answer.push_back(i);
        }
        return answer;
    }
};