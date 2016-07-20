// https://www.interviewbit.com/courses/programming/topics/arrays/problems/array_impl1/
// Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	int T = 0, B = A.size()-1,L = 0, R = A[0].size()-1, dir = 0, j = 0;
	while((T <= B) && (L <= R)){
	    if(dir == 0){
	        for(int i = L;i <= R;i++)
	            result.push_back(A[T][i]);
	        T++;
	        dir = 1;
	    }
	    
	    else if(dir == 1){
	        for(int i = T; i <= B;i++)
	            result.push_back(A[i][R]);
	        R--;
	        dir = 2;
	    }
	    else if(dir == 2){
	        for(int i = R; i >= L;i--)
	            result.push_back(A[B][i]);
	        B--;
	        dir = 3;
	    }
	     else{
	        for(int i = B; i >= T ;i--)
	            result.push_back(A[i][L]);
	        L++;
	        dir = 0;
	     }
	}
	return result;
}