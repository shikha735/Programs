// https://www.interviewbit.com/problems/rotate-matrix/
// You are given an n x n 2D matrix representing an image.
// Rotate the image by 90 degrees (clockwise).
// You need to do this in place.

void Solution::rotate(vector<vector<int> > &A) {
    int temp;
    int n=A.size();
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){

        	// storing left
            temp=A[i][j];

            // right to top
            A[i][j]=A[n-j-1][i];

            // bottom to rightw
            A[n-j-1][i]=A[n-i-1][n-j-1];

            // left to bottom
            A[n-i-1][n-j-1]=A[j][n-i-1];

            // temp to left
            A[j][n-i-1]=temp;
        }
    }
}
