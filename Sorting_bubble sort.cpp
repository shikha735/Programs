#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &A, int N){
	bool sorted;
	for(int i=1;i<N;i++){
		sorted = true;
		for(int j=0;j<N-i;j++){
			if(A[j] > A[j+1]){
				swap(A[j],A[j+1]);
				sorted = false;
			}
		}
		if(sorted){
			return;
		}
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
	bubbleSort(A,N);
	for(int i=0;i<N;i++)
		cout << A[i] << " ";
	return 0;
}