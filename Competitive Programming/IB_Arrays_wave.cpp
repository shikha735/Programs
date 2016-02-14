// https://www.interviewbit.com/courses/programming/topics/arrays/problems/wave/
// sort the array into a wave like array and return it

int partition(vector<int> &A,int start,int end){
	int pIndex = start;
	int pivot = A[end];
	for(int i=start;i<end;i++){
		if(A[i] <= pivot){
			swap(A[pIndex],A[i]);
			pIndex++;
		}
	}
	swap(A[pIndex],A[end]);
	return pIndex;
}

void quickSort(vector<int> &A, int start, int end){
	int pIndex;
	if(start < end){
		pIndex = partition(A,start,end);
		quickSort(A,start,pIndex-1);
		quickSort(A,pIndex+1,end);
	}
}

vector<int> Solution::wave(vector<int> &A) {
    int n=A.size(),temp;
    quickSort(A,0,n-1);
    for(int i=0;i<=n-2;i=i+2){
        swap(A[i],A[i+1]);
    }
    return A;
}
