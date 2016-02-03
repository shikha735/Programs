#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &A,int N){
	int minIndex;
	for(int i=0;i<N-1;i++){
		minIndex = i;
		for(int j=i+1;j<N;j++){
			if(A[j]<A[minIndex]){
				minIndex = j;
			}
		}
		swap(A[minIndex],A[i]);
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
	selectionSort(A,N);
	for(int i=0;i<N;i++){
		cout << A[i] << " ";
	}
	return 0;
}