// https://www.interviewbit.com/courses/programming/topics/bit-manipulation/problems/single/
// Given an array of integers, every element appears twice except for one. Find that single one.

int Solution::singleNumber(const vector<int> &A) {
    int x = 0;
	for(int i=0;i<A.size();i++)
		x = x ^ A[i];
	return x;
}
