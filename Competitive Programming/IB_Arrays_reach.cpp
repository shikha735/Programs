// https://www.interviewbit.com/courses/programming/topics/arrays/problems/reach/
// You are given a sequence of points and the order in which you need to cover the points.
// Give the minimum number of steps in which you can achieve it.
// You start from the first point.

// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    if (X.size() <= 1) return 0;
            assert(X.size() == Y.size());
            int ans = 0;
            for (int i = 1; i < X.size(); i++) {
                ans += max(abs(X[i] - X[i-1]), abs(Y[i] - Y[i-1]));
            }
            return ans;
}
