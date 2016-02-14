// rotate the array A by B positions
// https://www.interviewbit.com/courses/programming/topics/arrays/problems/array_bug/

vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret;
	int len = A.size(), x;
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[(i + B)%len]);
	}
	return ret; 
}

