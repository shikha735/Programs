// https://www.interviewbit.com/courses/programming/topics/arrays/problems/interval/
// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compareInterval(Interval i1,Interval i2){
    return (i1.start < i2.start);
}
vector<Interval> mergeIntervals(vector<Interval> intervals){
    int n = intervals.size();
    sort(intervals.begin(),intervals.end(),compareInterval);
    int index = 0;
    if (n <= 0)
        return intervals;
    vector<Interval> s;
    s.push_back(intervals[0]);
    for (int i = 1 ; i < n; i++)
    {
        Interval top = s[s.size()-1];
        if (top.end < intervals[i].start)
            s.push_back(intervals[i]);
        else if (top.end < intervals[i].end)
        {
            top.end = intervals[i].end;
            s.pop_back();
            s.push_back(top);
        }
    }
    return s;
}
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    intervals.push_back(newInterval);
    vector<Interval> s = mergeIntervals(intervals);
    return s;
}
