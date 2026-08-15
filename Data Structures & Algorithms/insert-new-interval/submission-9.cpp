class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> output;

        for(int i = 0; i < intervals.size(); ++i){
            if(newInterval[1] < intervals[i][0]){
                output.push_back(newInterval);
                for(int remaining = i; remaining < intervals.size(); ++remaining){
                    output.push_back(intervals[remaining]);
                }
                return output;
            }
            else if(newInterval[0] > intervals[i][1]){
                output.push_back(intervals[i]);
            }
            else{
                newInterval = {min(newInterval[0], intervals[i][0]),
                                max(newInterval[1], intervals[i][1])};
            }
        }
        output.push_back(newInterval);
        return output;
    }
};
