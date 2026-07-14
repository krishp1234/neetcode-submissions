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
       vector<int> answer;
       for(int i = 0; i < k; ++i){
        answer.push_back(pq.top().second);
        pq.pop();
       }
       return answer;

        /*int most_frequent = frequency[nums[0]];
        int key; 
        for(auto i : frequency){
            if((i.second) > most_frequent){
                most_frequent = i.second;
                key = i.first;
            }
            else if((i.second) >= most_frequent){
                key = i.first;
            }
        }
        return {key};*/


    }
};
