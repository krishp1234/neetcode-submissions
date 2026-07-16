class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product;
        for(int i = 0; i < nums.size(); ++i){
            int multiply = 1;
            if(nums[i] == 0){
                for(int s = 0; s < nums.size(); ++s){
                    if(s == i){
                        continue;
                    }
                    multiply *= nums[s];
                }
                product.push_back(multiply);
            }
            for(int j = 0; j < nums.size(); ++j){
                multiply *= nums[j];
            }
            if(nums[i] != 0){
                product.push_back(multiply / nums[i]);
            }
        }
        return product;
    }
};
