class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //priority_queue<int> pq(nums.begin(), nums.end());
        unordered_map<int, int> frequency;
        //int count = 0;
        for(auto i : nums){
            ++frequency[i];
        }

        priority_queue<pair<int, int>> pq;
        for(auto i : frequency){
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
