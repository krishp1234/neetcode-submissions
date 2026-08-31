class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        //6,4,3,2,2
        //3,2,2,2
        //2,2,1
        //1,0
        //1
        for(auto i = 1; i < stones.size(); ++i){
            int largest = pq.top();
            pq.pop();
            int second_largest = pq.top();
            pq.pop();
            pq.push(largest - second_largest);
        }
        int sum = 0;
        for(int i = 0; i < pq.size(); ++i){
            sum += pq.top();
            pq.pop();
        }
        return sum;

    }
};
