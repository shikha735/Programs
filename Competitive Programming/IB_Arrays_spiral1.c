// https://www.interviewbit.com/courses/programming/topics/arrays/problems/array_impl1/
// Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array ' * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* spiralOrder(const int** A, int n11, int n12, int *length_of_array) {
	 *length_of_array = n11 * n12; // length of result array
	 int *result = (int *) malloc(*length_of_array * sizeof(int));
	 int T = 0,B = n11-1, R = n12-1, L = 0, dir = 0;
	 int i=0,j=-1;
	 while((T <= B) && (L <= R)){
	     if(dir == 0){
	         for(i=L;i<=R;i++){
	             result[++j]=A[T][i];
	         }
	         T++;
	         dir = 1;
	     }
	     else if(dir == 1){
	         for(i=T;i<=B;i++){
	             result[++j]=A[i][R];
	         }
	         R--;
	         dir = 2;
	     }
	     else if(dir == 2){
	         for(i=R;i >= L;i--){
	             result[++j]=A[B][i];
	         }
	         B--;
	         dir = 3;
	     }
	     else{
	         for(i=B;i >= T;i--){
	             result[++j]=A[i][L];
	         }
	         L++;
	         dir = 0;
	     }
	     //dir = (dir+1)%4;
	 }
	 return result;
}
