class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int largest = 0;
        for(int i = 0; i < k; ++i){
            largest = pq.top();
            pq.pop();
        }
        return largest;
    }
};
