#include <iostream>
#include <vector>
using namespace std;

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

int main() {
	int N,input;
	cin >> N;
	vector<int> A;
	for(int i=0;i<N;i++){
		cin >> input;
		A.push_back(input);
	}
	quickSort(A,0,4);
	for(int i=0;i<5;i++){
		cout << A[i] << " ";
	}
	return 0;
}