#include <iostream>
#include <vector>
#include <cstdlib>
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

int randomizedPartition(vector<int> &A,int start,int end){
	int pivotIndex = start + (rand()%(end - start + 1));
	swap(A[pivotIndex],A[end]);
	return partition(A,start,end);
}

void quickSort(vector<int> &A, int start, int end){
	int pIndex;
	if(start < end){
		pIndex = randomizedPartition(A,start,end);
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