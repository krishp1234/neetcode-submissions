class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        for(int i = 0; i < intervals.size(); ++i){
            if(newInterval[1] < intervals[i][0]){
                result.push_back(newInterval);
                while(i < intervals.size()){
                    result.push_back(intervals[i]);
                    ++i;
                }
                return result;
            }
            else if(newInterval[0] > intervals[i][1]){
                result.push_back(intervals[i]);
            }
            else{
                newInterval = {min(newInterval[0], intervals[i][0]),
                max(newInterval[1], intervals[i][1])};
            }
        }
        result.push_back(newInterval);
        return result;
    }
};
