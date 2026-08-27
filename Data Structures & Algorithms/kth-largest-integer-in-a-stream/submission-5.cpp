class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
//1,2,3,4,5
    KthLargest(int k, vector<int>& nums) 
    : k(k){
      for(auto i : nums){
        pq.push(i);
        if(pq.size() > k){
            pq.pop();
        }
      }  
    }
    //3, 3,4,5
    int add(int val) {
       pq.push(val);
       if(pq.size() > k){
        pq.pop();
       }
       return pq.top();

    }
};
