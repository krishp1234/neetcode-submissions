class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> frequent;
       for(auto i : nums){
        ++frequent[i];
       }
       priority_queue<pair<int, int>> pq;
       for(auto i : frequent){
        pq.push({i.second, i.first});
       }
       vector<int> topk;
       for(int i = 0; i < k; ++i){
        topk.push_back(pq.top().second);
        pq.pop();
       }
       return topk;

    }
};
