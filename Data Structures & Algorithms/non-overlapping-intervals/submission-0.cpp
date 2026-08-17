class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);
        int count = 0;
        //[1,2] [1,4] [2,4]

        for(int i = 1; i < intervals.size(); ++i){
            int start = intervals[i][0];
            int end = intervals[i][1];
            int prev_end = output.back()[1];

            if(start < prev_end){
                output.back()[1] = min(prev_end, end);
                ++count;
            }
            else{
                output.push_back(intervals[i]);
            }

        }
        return count;
    }
};
