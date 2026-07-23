class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        //3,4,5
        //4,5,3
        //5,3,4
        //[3,4,5,6,1,2]
        // 6,1,2,3,4,5
        
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[right] > nums[left]){
                while(left <= right){
                    int mid = (left + right) / 2;
                    if(nums[mid] == target){
                        return mid;
                    }
                    else if(nums[mid] > target){
                        right = mid - 1;
                    }
                    else{
                        left = mid + 1;
                    }
                }
                return - 1;
            }

            else if(nums[mid] >= nums[left]){
                if(target < nums[left] || nums[mid] < target){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            else{
                if(target < nums[mid] || target > nums[right]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
        }
        return -1;
    }
};
