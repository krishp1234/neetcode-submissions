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
 bool comparator(const Interval &a, const Interval &b){
    return a.start < b.start;
 }

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        
        sort(intervals.begin(), intervals.end(), comparator);
        priority_queue<int, vector<int>, greater<int>> end_times;

        for(auto i : intervals){
            if(!end_times.empty() && i.start >= end_times.top()){
                end_times.pop();
            }
            end_times.push(i.end);
        }
        return end_times.size();
        
    }
};
