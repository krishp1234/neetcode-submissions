class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>> pq;

        for(auto i : points){
            int distance = (pow(i[0] - 0, 2) + 
            pow(i[1] - 0, 2));
            pq.push({distance, {i[0], i[1]}});
        } 

        while(pq.size() > k){
            pq.pop();
        }
        vector<vector<int>> ans;
        while(pq.size()){
            ans.push_back({pq.top().second.first,         
            pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};
