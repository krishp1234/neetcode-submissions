/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */
bool comparator(Interval &a, Interval &b){
    return a.start < b.start;
}
class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if(intervals.empty()){
            return true;
        }
        sort(intervals.begin(), intervals.end(), comparator);
        vector<vector<int>> output;
        output.push_back({intervals[0].start, intervals[0].end});

        for(int i = 1; i < intervals.size(); ++i){
            int start = intervals[i].start;
            int end = intervals[i].end;
            int prev_end = output.back()[1];

            if(start < prev_end){
                return false;
            }
            else{
                output.push_back({intervals[i].start, intervals[i].end});
            }
        }
        return true;
    }
};

