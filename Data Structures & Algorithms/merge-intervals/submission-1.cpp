class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);

        for(int i = 0; i < intervals.size(); ++i){
            int start = intervals[i][0];
            int end = intervals[i][1];
            int long_end = output.back()[1];

            if(start <= long_end){
                output.back()[1] = max(long_end, end);
            }
            else{
                output.push_back(intervals[i]);
            }
        }
        return output;
        
    }
};
