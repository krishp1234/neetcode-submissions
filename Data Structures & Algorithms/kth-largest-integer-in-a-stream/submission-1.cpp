class KthLargest {
public:

    KthLargest(int k, vector<int>& nums) 
        : k(k), pq(nums.begin(), nums.end()){}
    
    
    int add(int val) {
        pq.push(val);
        int largest = 0;
        priority_queue<int> temp = pq;
        for(int i = 0; i < k; ++i){
            largest = temp.top();
            temp.pop();
        }
        return largest;

    }
private:
    priority_queue<int> pq;
    int k;
};
