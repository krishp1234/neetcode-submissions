class Solution {
public:
    int findMin(vector<int> &nums) {
        //3,4,5,6,1,2
        //4,5,6,1,2,3
        //4,5,3
        int left = 0;
        int right = nums.size() - 1;
        int min1 = nums[0];
        
        while(left <= right){
            if(nums[right] >= nums[left]){
                min1 = min(min1, nums[left]);
                break;
            }
            int mid = (left + right) / 2;
            min1 = min(min1, nums[mid]);
            if(nums[mid] >= nums[left]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }

        }
        return min1;
    }
};
