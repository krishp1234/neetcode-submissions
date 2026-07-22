class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> twosum;
       int left = 0;
       int right = numbers.size() - 1;
       while(left < right){
        int sum = numbers[left] + numbers[right];
        if(sum > target){
            --right;
        }
        else if(sum < target){
            ++left;
        }
        else{
            twosum = {(left + 1), (right + 1)};
            //twosum.push_back(right + 1);
            break;
        }
       }
       return twosum; 
    }
};
