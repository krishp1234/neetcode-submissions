class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        sort(intervals.begin(), intervals.end());
        output.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); ++i){
            int start = intervals[i][0];
            int end = intervals[i][1];
            int previous_end = output.back()[1];

            if(start <= previous_end){
                output.back()[1] = max(previous_end, end);
            }
            else{
                output.push_back(intervals[i]);
            }
        }
        return output;
    }
};
