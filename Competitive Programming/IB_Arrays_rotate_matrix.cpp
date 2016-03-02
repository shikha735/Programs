// https://www.interviewbit.com/problems/rotate-matrix/
// You are given an n x n 2D matrix representing an image.
// Rotate the image by 90 degrees (clockwise).
// You need to do this in place.

void Solution::rotate(vector<vector<int> > &A) {
    int temp;
    int n=A.size();
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            temp=A[i][j];
            A[i][j]=A[n-j-1][i];
            A[n-j-1][i]=A[n-i-1][n-j-1];
            A[n-i-1][n-j-1]=A[j][n-i-1];
            A[j][n-i-1]=temp;
        }
    }
}
