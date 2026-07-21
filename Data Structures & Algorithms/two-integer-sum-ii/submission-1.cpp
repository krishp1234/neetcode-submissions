class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> sum;
        for(int i = 0; i < numbers.size(); ++i){
            int difference = target - numbers[i];
            if(sum.contains(difference)){
                return {min(sum[difference] + 1, i + 1), max(sum[difference] + 1, i + 1)};
            }
            sum.insert({numbers[i], i});
        }
        return {};
    }
};
